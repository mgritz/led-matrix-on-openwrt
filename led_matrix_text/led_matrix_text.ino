#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif
#include "alphabet.h"

#define DOUT_PIN 9
#define STRIP_NUM_PIXELS 40

Adafruit_NeoPixel strip(STRIP_NUM_PIXELS, DOUT_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  strip.begin();
  strip.show();

  Serial.begin(9600);
}

String txt = "Kannscht du hier mal was sinnvolles reinschreiben?";
String next_txt = "";


#define STR_MAXLEN 128

#define VIRTUAL_WIDTH (STR_MAXLEN * (LETTER_WIDTH+1))
#define WIDTH  8
#define HEIGHT 5

#define COLOR_IDX     3
#define SLEEPTIME_MS  250


bool virtual_display[VIRTUAL_WIDTH][HEIGHT] = {0};
bool display[WIDTH][HEIGHT] = {0};

void reset_display()
{
  uint8_t x, y;
  for (x = 0; x < WIDTH; x++)
    for(y = 0; y < HEIGHT; y++)
      display[x][y] = 0;
}

void set_pixel(size_t x, size_t y, bool state)
{
  virtual_display[x][y] = state;
}

void print_display()
{
  uint8_t x, y;
  for (y = 0; y < HEIGHT; y++) {
    for (x = 0; x < WIDTH; x++)
      if (display[x][y] == 1) {
        const size_t pixel_idx = (y * WIDTH) + x;
        strip.setPixelColor(pixel_idx, 0x0f, 0x0f, 0x0f);
      }
  }
  strip.show();
}

void draw_letter(size_t offs_x, size_t offs_y, const letter ltr, bool inverted)
{
  size_t x, y;
  for (y = 0; y < LETTER_HEIGHT; y++)
    for (x = 0; x < LETTER_WIDTH; x++)
      if (inverted == 0)
        set_pixel(offs_x + x, offs_y + y, ltr[y][x]);
      else
        set_pixel(offs_x + x, offs_y + y, !ltr[y][x]);
}

void ascii_to_display(const char* str)
{
  size_t len = strlen(str);
  size_t i;
  for (i = 0; i < len; i++) {
    // capital letters
    if (str[i] >= 65 && str[i] <= 90)
      draw_letter(i * (LETTER_WIDTH+1), 0, *alphabet[str[i] - 65], 0);
    // lower case letters
    else if (str[i] >= 97 && str[i] <= 122)
      draw_letter(i * (LETTER_WIDTH+1), 0, *alphabet[str[i] - 97], 0);
    // numbers
    else if (str[i] >= 48 && str[i] <= 57)
      draw_letter(i * (LETTER_WIDTH+1), 0, *numbers[str[i] - 48], 0);
    // some special characters
    else if (str[i] >= 32 && str[i] <= 34)
      draw_letter(i * (LETTER_WIDTH+1), 0, *special_chars_section1[str[i] - 32], 0);
    else if (str[i] == '%')
      draw_letter(i * (LETTER_WIDTH+1), 0, percent, 0);
    else if (str[i] >= 39 && str[i] <= 47)
      draw_letter(i * (LETTER_WIDTH+1), 0, *special_chars_section3[str[i] - 39], 0);
    else if (str[i] >= 58 && str[i] <= 63)
      draw_letter(i * (LETTER_WIDTH+1), 0, *special_chars_section4[str[i] - 58], 0);
    else if (str[i] >= 91 && str[i] <= 96)
      draw_letter(i * (LETTER_WIDTH+1), 0, *special_chars_section5[str[i] - 91], 0);
    // unsupported character
    else
      draw_letter(i * (LETTER_WIDTH+1), 0, not_supported, 0);
  }
}

void virtual_to_real_display(size_t scrolling_position)
{
  size_t x, y;
  size_t x_start = 0;
  size_t virtual_x_start = 0;

  if (scrolling_position <= WIDTH)
    x_start = WIDTH - scrolling_position;
  else
    virtual_x_start = scrolling_position - WIDTH;

  reset_display();
  for (x = 0; x < WIDTH; x++)
    for (y = 0; y < HEIGHT; y++)
      display[x_start + x][y] = virtual_display[virtual_x_start + x][y];

  print_display();
}




void loop() {
  size_t len = txt.length();

  ascii_to_display(txt.c_str());

  size_t scrollpos;
scroll:
  for (scrollpos = 0; scrollpos < len * (LETTER_WIDTH+1) + WIDTH; scrollpos++) {
    virtual_to_real_display(scrollpos);
    delay(SLEEPTIME_MS);
  }
}

int rxcnt = 0;

void serialEvent() {
  const char in = Serial.read();
  if (in == '\n') {
    if (rxcnt >= 4) {
      txt = next_txt.substring(4);
      next_txt = "";
      rxcnt = 0;
    }
  } else {
    next_txt += in;
    rxcnt++;
  }

  if ( (rxcnt > 4) && (! next_txt.startsWith("iLAB"))
          || (rxcnt > 40) )
  {
    next_txt = next_txt.substring(4);
  }
}
