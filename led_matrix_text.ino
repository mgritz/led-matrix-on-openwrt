#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

#define DOUT_PIN 9
Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(5, 8, DOUT_PIN,
  NEO_MATRIX_BOTTOM     + NEO_MATRIX_LEFT +
  NEO_MATRIX_COLUMNS + NEO_MATRIX_PROGRESSIVE,
  NEO_GRB            + NEO_KHZ800);

void setup() {
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  matrix.begin();
  matrix.setTextWrap(false);
  matrix.setBrightness(40);
  matrix.setTextColor(matrix.Color(255,0,255));

  Serial.begin(9600);
}

int x = matrix.width();
String txt = "Alles Gute, Gentleman!";
String next_txt = "";

void loop() {
  matrix.fillScreen(0);
  matrix.setCursor(x, 0);
  matrix.print(txt);
  const int l = txt.length() * 6;
  if(--x < (-l) ) {
    x = matrix.width();
  }
  matrix.show();
  
  delay(250);
}

void serialEvent() {
  const char in = Serial.read();
  if (in == '\n') {
    txt = next_txt;
    next_txt = "";
    matrix.fillScreen(0);
    x = matrix.width();
  } else
    next_txt += in;
}
