#ifndef ALPHABET_H
#define ALPHABET_H

#ifdef __cplusplus
extern "C" {
#endif

#define LETTER_WIDTH  3
#define LETTER_HEIGHT 5

typedef bool letter[LETTER_HEIGHT][LETTER_WIDTH];

const letter a = {{ 1, 1, 1 },
                  { 1, 0, 1 },
                  { 1, 1, 1 },
                  { 1, 0, 1 },
                  { 1, 0, 1 }};

const letter b = {{ 1, 0, 0 },
                  { 1, 0, 0 },
                  { 1, 1, 1 },
                  { 1, 0, 1 },
                  { 1, 1, 1 }};

const letter c = {{ 1, 1, 1 },
                  { 1, 0, 0 },
                  { 1, 0, 0 },
                  { 1, 0, 0 },
                  { 1, 1, 1 }};

const letter d = {{ 0, 0, 1 },
                  { 0, 0, 1 },
                  { 1, 1, 1 },
                  { 1, 0, 1 },
                  { 1, 1, 1 }};

const letter e = {{ 1, 1, 1 },
                  { 1, 0, 0 },
                  { 1, 1, 1 },
                  { 1, 0, 0 },
                  { 1, 1, 1 }};

const letter f = {{ 1, 1, 1 },
                  { 1, 0, 0 },
                  { 1, 1, 0 },
                  { 1, 0, 0 },
                  { 1, 0, 0 }};

const letter g = {{ 1, 1, 1 },
                  { 1, 0, 0 },
                  { 1, 0, 1 },
                  { 1, 0, 1 },
                  { 1, 1, 1 }};

const letter h = {{ 1, 0, 1 },
                  { 1, 0, 1 },
                  { 1, 1, 1 },
                  { 1, 0, 1 },
                  { 1, 0, 1 }};

const letter i = {{ 0, 1, 0 },
                  { 0, 0, 0 },
                  { 0, 1, 0 },
                  { 0, 1, 0 },
                  { 0, 1, 0 }};

const letter j = {{ 0, 0, 1 },
                  { 0, 0, 1 },
                  { 0, 0, 1 },
                  { 1, 0, 1 },
                  { 1, 1, 1 }};

const letter k = {{ 1, 0, 1 },
                  { 1, 1, 0 },
                  { 1, 0, 0 },
                  { 1, 1, 0 },
                  { 1, 0, 1 }};

const letter l = {{ 1, 0, 0 },
                  { 1, 0, 0 },
                  { 1, 0, 0 },
                  { 1, 0, 0 },
                  { 1, 1, 1 }};

const letter m = {{ 1, 0, 1 },
                  { 1, 1, 1 },
                  { 1, 0, 1 },
                  { 1, 0, 1 },
                  { 1, 0, 1 }};

const letter n = {{ 0, 0, 0 },
                  { 0, 0, 0 },
                  { 1, 1, 1 },
                  { 1, 0, 1 },
                  { 1, 0, 1 }};

const letter o = {{ 0, 0, 0 },
                  { 0, 0, 0 },
                  { 1, 1, 1 },
                  { 1, 0, 1 },
                  { 1, 1, 1 }};

const letter p = {{ 1, 1, 1 },
                  { 1, 0, 1 },
                  { 1, 1, 1 },
                  { 1, 0, 0 },
                  { 1, 0, 0 }};

const letter q = {{ 1, 1, 1 },
                  { 1, 0, 1 },
                  { 1, 1, 1 },
                  { 0, 0, 1 },
                  { 0, 0, 1 }};

const letter r = {{ 1, 1, 1 },
                  { 1, 0, 1 },
                  { 1, 1, 1 },
                  { 1, 1, 0 },
                  { 1, 0, 1 }};

const letter s = {{ 1, 1, 1 },
                  { 1, 0, 0 },
                  { 1, 1, 1 },
                  { 0, 0, 1 },
                  { 1, 1, 1 }};

const letter t = {{ 1, 1, 1 },
                  { 0, 1, 0 },
                  { 0, 1, 0 },
                  { 0, 1, 0 },
                  { 0, 1, 0 }};

const letter u = {{ 1, 0, 1 },
                  { 1, 0, 1 },
                  { 1, 0, 1 },
                  { 1, 0, 1 },
                  { 1, 1, 1 }};

const letter v = {{ 1, 0, 1 },
                  { 1, 0, 1 },
                  { 1, 0, 1 },
                  { 1, 0, 1 },
                  { 0, 1, 0 }};

const letter w = {{ 1, 0, 1 },
                  { 1, 0, 1 },
                  { 1, 0, 1 },
                  { 1, 1, 1 },
                  { 1, 0, 1 }};

const letter x = {{ 1, 0, 1 },
                  { 1, 0, 1 },
                  { 0, 1, 0 },
                  { 1, 0, 1 },
                  { 1, 0, 1 }};

const letter y = {{ 1, 0, 1 },
                  { 1, 0, 1 },
                  { 1, 1, 1 },
                  { 0, 1, 0 },
                  { 0, 1, 0 }};

const letter z = {{ 1, 1, 1 },
                  { 0, 0, 1 },
                  { 0, 1, 0 },
                  { 1, 0, 0 },
                  { 1, 1, 1 }};

const letter* alphabet[] = {&a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m,
                            &n, &o, &p, &q, &r, &s, &t, &u, &v, &w, &x, &y, &z};


const letter zero = {{ 1, 1, 1 },
                     { 1, 0, 1 },
                     { 1, 0, 1 },
                     { 1, 0, 1 },
                     { 1, 1, 1 }};

const letter one = {{ 0, 0, 1 },
                    { 0, 1, 1 },
                    { 0, 0, 1 },
                    { 0, 0, 1 },
                    { 0, 0, 1 }};

const letter two = {{ 1, 1, 1 },
                    { 0, 0, 1 },
                    { 1, 1, 1 },
                    { 1, 0, 0 },
                    { 1, 1, 1 }};

const letter three = {{ 1, 1, 1 },
                      { 0, 0, 1 },
                      { 1, 1, 1 },
                      { 0, 0, 1 },
                      { 1, 1, 1 }};

const letter four = {{ 1, 0, 1 },
                     { 1, 0, 1 },
                     { 1, 1, 1 },
                     { 0, 0, 1 },
                     { 0, 0, 1 }};

const letter five = {{ 1, 1, 1 },
                     { 1, 0, 0 },
                     { 1, 1, 1 },
                     { 0, 0, 1 },
                     { 1, 1, 1 }};

const letter six = {{ 1, 1, 1 },
                    { 1, 0, 0 },
                    { 1, 1, 1 },
                    { 1, 0, 1 },
                    { 1, 1, 1 }};

const letter seven = {{ 1, 1, 1 },
                      { 1, 0, 1 },
                      { 0, 0, 1 },
                      { 0, 0, 1 },
                      { 0, 0, 1 }};

const letter eight = {{ 1, 1, 1 },
                      { 1, 0, 1 },
                      { 1, 1, 1 },
                      { 1, 0, 1 },
                      { 1, 1, 1 }};

const letter nine = {{ 1, 1, 1 },
                     { 1, 0, 1 },
                     { 1, 1, 1 },
                     { 0, 0, 1 },
                     { 1, 1, 1 }};

const letter* numbers[] = {&zero, &one, &two, &three, &four,
                           &five, &six, &seven, &eight, &nine};


const letter space = {{ 0, 0, 0 },
                      { 0, 0, 0 },
                      { 0, 0, 0 },
                      { 0, 0, 0 },
                      { 0, 0, 0 }};

const letter exclamation_mark = {{ 0, 1, 0 },
                                 { 0, 1, 0 },
                                 { 0, 1, 0 },
                                 { 0, 0, 0 },
                                 { 0, 1, 0 }};

const letter quotation_mark = {{ 1, 0, 1 },
                               { 1, 0, 1 },
                               { 0, 0, 0 },
                               { 0, 0, 0 },
                               { 0, 0, 0 }};

const letter percent = {{ 1, 0, 0 },
                        { 0, 0, 1 },
                        { 0, 1, 0 },
                        { 1, 0, 0 },
                        { 0, 0, 1 }};

const letter quote = {{ 0, 1, 0 },
                      { 0, 1, 0 },
                      { 0, 0, 0 },
                      { 0, 0, 0 },
                      { 0, 0, 0 }};

const letter left_paranthesis = {{ 0, 1, 1 },
                                 { 0, 1, 0 },
                                 { 0, 1, 0 },
                                 { 0, 1, 0 },
                                 { 0, 1, 1 }};

const letter right_paranthesis = {{ 1, 1, 0 },
                                  { 0, 1, 0 },
                                  { 0, 1, 0 },
                                  { 0, 1, 0 },
                                  { 1, 1, 0 }};

const letter asterisk = {{ 0, 0, 0 },
                         { 1, 0, 1 },
                         { 0, 1, 0 },
                         { 1, 0, 1 },
                         { 0, 0, 0 }};

const letter plus = {{ 0, 0, 0 },
                     { 0, 1, 0 },
                     { 1, 1, 1 },
                     { 0, 1, 0 },
                     { 0, 0, 0 }};

const letter comma = {{ 0, 0, 0 },
                      { 0, 0, 0 },
                      { 0, 0, 0 },
                      { 0, 1, 0 },
                      { 1, 0, 0 }};

const letter minus = {{ 0, 0, 0 },
                      { 0, 0, 0 },
                      { 1, 1, 1 },
                      { 0, 0, 0 },
                      { 0, 0, 0 }};

const letter period = {{ 0, 0, 0 },
                       { 0, 0, 0 },
                       { 0, 0, 0 },
                       { 0, 0, 0 },
                       { 1, 0, 0 }};

const letter slash = {{ 0, 0, 0 },
                      { 0, 0, 1 },
                      { 0, 1, 0 },
                      { 1, 0, 0 },
                      { 0, 0, 0 }};

const letter colon = {{ 0, 0, 0 },
                      { 0, 1, 0 },
                      { 0, 0, 0 },
                      { 0, 1, 0 },
                      { 0, 0, 0 }};

const letter semicolon = {{ 0, 0, 0 },
                          { 0, 1, 0 },
                          { 0, 0, 0 },
                          { 0, 1, 0 },
                          { 1, 0, 0 }};

const letter less_than = {{ 0, 0, 1 },
                          { 0, 1, 0 },
                          { 1, 0, 0 },
                          { 0, 1, 0 },
                          { 0, 0, 1 }};

const letter equal = {{ 0, 0, 0 },
                      { 1, 1, 1 },
                      { 0, 0, 0 },
                      { 1, 1, 1 },
                      { 0, 0, 0 }};

const letter greater_than = {{ 1, 0, 0 },
                             { 0, 1, 0 },
                             { 0, 0, 1 },
                             { 0, 1, 0 },
                             { 1, 0, 0 }};

const letter question_mark = {{ 1, 1, 1 },
                              { 0, 0, 1 },
                              { 0, 1, 1 },
                              { 0, 0, 0 },
                              { 0, 1, 0 }};

const letter backslash = {{ 0, 0, 0 },
                          { 1, 0, 0 },
                          { 0, 1, 0 },
                          { 0, 0, 1 },
                          { 0, 0, 0 }};

const letter circumflex = {{ 0, 1, 0 },
                           { 1, 0, 1 },
                           { 0, 0, 0 },
                           { 0, 0, 0 },
                           { 0, 0, 0 }};

const letter underscore = {{ 0, 0, 0 },
                           { 0, 0, 0 },
                           { 0, 0, 0 },
                           { 0, 0, 0 },
                           { 1, 1, 1 }};

const letter back_apostrophe = {{ 1, 0, 0 },
                                { 0, 1, 0 },
                                { 0, 0, 0 },
                                { 0, 0, 0 },
                                { 0, 0, 0 }};

const letter* special_chars_section1[] = {&space, &exclamation_mark, &quotation_mark};
// section 2 contains only '%'
const letter* special_chars_section3[] = {&quote, &left_paranthesis, &right_paranthesis,
                                          &asterisk, &plus, &comma, &minus, &period, &slash};
const letter* special_chars_section4[] = {&colon, &semicolon, &less_than,
                                          &equal, &greater_than, &question_mark};
// parantheses are square-shaped on this display anyway
const letter* special_chars_section5[] = {&left_paranthesis, &backslash, &right_paranthesis,
                                          &circumflex, &underscore, &back_apostrophe};


/* Show this pattern if an ASCII character is not listed here. */
const letter not_supported = {{ 0, 0, 0 },
                              { 0, 0, 0 },
                              { 0, 1, 0 },
                              { 0, 0, 0 },
                              { 0, 0, 0 }};
#ifdef __cplusplus
}
#endif /* CPP */
#endif /* include guard */
