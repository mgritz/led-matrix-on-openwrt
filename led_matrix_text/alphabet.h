#ifndef ALPHABET_H
#define ALPHABET_H

#ifdef __cplusplus
extern "C" {
#endif

#define LETTER_WIDTH  3
#define LETTER_HEIGHT 5

#define LETTER2INT(b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14)           \
    (b0 | (b1 << 1) | (b2 << 2) | (b3 << 3) | (b4 << 4) | (b5 << 5) | (b6 << 6) | (b7 << 7) | \
    (b8 << 8) | (b9 << 9) | (b10 << 10) | (b11 << 11) | (b12 << 12) | (b13 << 13) |           \
    (b14 << 14))

const uint16_t alphabet[] = {
	// a
	LETTER2INT(1, 1, 1,
               1, 0, 1,
               1, 1, 1,
               1, 0, 1,
               1, 0, 1),
	// b
	LETTER2INT(1, 0, 0,
               1, 0, 0,
               1, 1, 1,
               1, 0, 1,
               1, 1, 1),
	// c
	LETTER2INT(1, 1, 1,
               1, 0, 0,
               1, 0, 0,
               1, 0, 0,
               1, 1, 1),
	// d
	LETTER2INT(0, 0, 1,
               0, 0, 1,
               1, 1, 1,
               1, 0, 1,
               1, 1, 1),
	// e
	LETTER2INT(1, 1, 1,
               1, 0, 0,
               1, 1, 1,
               1, 0, 0,
               1, 1, 1),
	// f
	LETTER2INT(1, 1, 1,
               1, 0, 0,
               1, 1, 0,
               1, 0, 0,
               1, 0, 0),
	// g
	LETTER2INT(1, 1, 1,
               1, 0, 0,
               1, 0, 1,
               1, 0, 1,
               1, 1, 1),
	// h
	LETTER2INT(1, 0, 1,
               1, 0, 1,
               1, 1, 1,
               1, 0, 1,
               1, 0, 1),
	// i
	LETTER2INT(0, 1, 0,
               0, 0, 0,
               0, 1, 0,
               0, 1, 0,
               0, 1, 0),
	// j
	LETTER2INT(0, 0, 1,
               0, 0, 1,
               0, 0, 1,
               1, 0, 1,
               1, 1, 1),
	// k
	LETTER2INT(1, 0, 1,
               1, 1, 0,
               1, 0, 0,
               1, 1, 0,
               1, 0, 1),
	// l
	LETTER2INT(1, 0, 0,
               1, 0, 0,
               1, 0, 0,
               1, 0, 0,
               1, 1, 1),
	// m
	LETTER2INT(1, 0, 1,
               1, 1, 1,
               1, 0, 1,
               1, 0, 1,
               1, 0, 1),
	// n
	LETTER2INT(0, 0, 0,
               0, 0, 0,
               1, 1, 1,
               1, 0, 1,
               1, 0, 1),
	// o
	LETTER2INT(0, 0, 0,
               0, 0, 0,
               1, 1, 1,
               1, 0, 1,
               1, 1, 1),
	// p
	LETTER2INT(1, 1, 1,
               1, 0, 1,
               1, 1, 1,
               1, 0, 0,
               1, 0, 0),
	// q
	LETTER2INT(1, 1, 1,
               1, 0, 1,
               1, 1, 1,
               0, 0, 1,
               0, 0, 1),
	// r
	LETTER2INT(1, 1, 1,
               1, 0, 1,
               1, 1, 1,
               1, 1, 0,
               1, 0, 1),
	// s
	LETTER2INT(1, 1, 1,
               1, 0, 0,
               1, 1, 1,
               0, 0, 1,
               1, 1, 1),
	// t
	LETTER2INT(1, 1, 1,
               0, 1, 0,
               0, 1, 0,
               0, 1, 0,
               0, 1, 0),
	// u
	LETTER2INT(1, 0, 1,
               1, 0, 1,
               1, 0, 1,
               1, 0, 1,
               1, 1, 1),
	// v
	LETTER2INT(1, 0, 1,
               1, 0, 1,
               1, 0, 1,
               1, 0, 1,
               0, 1, 0),
	// w
	LETTER2INT(1, 0, 1,
               1, 0, 1,
               1, 0, 1,
               1, 1, 1,
               1, 0, 1),
	// x
	LETTER2INT(1, 0, 1,
               1, 0, 1,
               0, 1, 0,
               1, 0, 1,
               1, 0, 1),
	// y
	LETTER2INT(1, 0, 1,
               1, 0, 1,
               1, 1, 1,
               0, 1, 0,
               0, 1, 0),
	// z
	LETTER2INT(1, 1, 1,
               0, 0, 1,
               0, 1, 0,
               1, 0, 0,
               1, 1, 1),
};


const uint16_t numbers[] = {
	// 0
	LETTER2INT(1, 1, 1,
               1, 0, 1,
               1, 0, 1,
               1, 0, 1,
               1, 1, 1),
	// 1
	LETTER2INT(0, 0, 1,
               0, 1, 1,
               0, 0, 1,
               0, 0, 1,
               0, 0, 1),
	// 2
	LETTER2INT(1, 1, 1,
               0, 0, 1,
               1, 1, 1,
               1, 0, 0,
               1, 1, 1),
	// 3
	LETTER2INT(1, 1, 1,
               0, 0, 1,
               1, 1, 1,
               0, 0, 1,
               1, 1, 1),
	// 4
	LETTER2INT(1, 0, 1,
               1, 0, 1,
               1, 1, 1,
               0, 0, 1,
               0, 0, 1),
	// 5
	LETTER2INT(1, 1, 1,
               1, 0, 0,
               1, 1, 1,
               0, 0, 1,
               1, 1, 1),
	// 6
	LETTER2INT(1, 1, 1,
               1, 0, 0,
               1, 1, 1,
               1, 0, 1,
               1, 1, 1),
	// 7
	LETTER2INT(1, 1, 1,
               1, 0, 1,
               0, 0, 1,
               0, 0, 1,
               0, 0, 1),
	// 8
	LETTER2INT(1, 1, 1,
               1, 0, 1,
               1, 1, 1,
               1, 0, 1,
               1, 1, 1),
	// 9
	LETTER2INT(1, 1, 1,
               1, 0, 1,
               1, 1, 1,
               0, 0, 1,
               1, 1, 1),
};


const uint16_t special_chars_section1[] = {
	// space
	LETTER2INT(0, 0, 0,
               0, 0, 0,
               0, 0, 0,
               0, 0, 0,
               0, 0, 0),
	// !
	LETTER2INT(0, 1, 0,
               0, 1, 0,
               0, 1, 0,
               0, 0, 0,
               0, 1, 0),
	// "
	LETTER2INT(1, 0, 1,
               1, 0, 1,
               0, 0, 0,
               0, 0, 0,
               0, 0, 0),
};

// %
const uint16_t percent = LETTER2INT(1, 0, 0,
                                    0, 0, 1,
                                    0, 1, 0,
                                    1, 0, 0,
                                    0, 0, 1);

const uint16_t special_chars_section3[] = {
	// '
	LETTER2INT(0, 1, 0,
               0, 1, 0,
               0, 0, 0,
               0, 0, 0,
               0, 0, 0),
	// (
	LETTER2INT(0, 1, 1,
               0, 1, 0,
               0, 1, 0,
               0, 1, 0,
               0, 1, 1),
	// )
	LETTER2INT(1, 1, 0,
               0, 1, 0,
               0, 1, 0,
               0, 1, 0,
               1, 1, 0),
	// *
	LETTER2INT(0, 0, 0,
               1, 0, 1,
               0, 1, 0,
               1, 0, 1,
               0, 0, 0),
	// +
	LETTER2INT(0, 0, 0,
               0, 1, 0,
               1, 1, 1,
               0, 1, 0,
               0, 0, 0),
	// ,
	LETTER2INT(0, 0, 0,
               0, 0, 0,
               0, 0, 0,
               0, 1, 0,
               1, 0, 0),
	// -
	LETTER2INT(0, 0, 0,
               0, 0, 0,
               1, 1, 1,
               0, 0, 0,
               0, 0, 0),
	// .
	LETTER2INT(0, 0, 0,
               0, 0, 0,
               0, 0, 0,
               0, 0, 0,
               1, 0, 0),
	// /
	LETTER2INT(0, 0, 0,
               0, 0, 1,
               0, 1, 0,
               1, 0, 0,
               0, 0, 0),
};

const uint16_t special_chars_section4[] = {
	// :
	LETTER2INT(0, 0, 0,
               0, 1, 0,
               0, 0, 0,
               0, 1, 0,
               0, 0, 0),
	// ;
	LETTER2INT(0, 0, 0,
               0, 1, 0,
               0, 0, 0,
               0, 1, 0,
               1, 0, 0),
	// <
	LETTER2INT(0, 0, 1,
               0, 1, 0,
               1, 0, 0,
               0, 1, 0,
               0, 0, 1),
	// =
	LETTER2INT(0, 0, 0,
               1, 1, 1,
               0, 0, 0,
               1, 1, 1,
               0, 0, 0),
	// >
	LETTER2INT(1, 0, 0,
               0, 1, 0,
               0, 0, 1,
               0, 1, 0,
               1, 0, 0),
	// ?
	LETTER2INT(1, 1, 1,
               0, 0, 1,
               0, 1, 1,
               0, 0, 0,
               0, 1, 0),
};

const uint16_t special_chars_section5[] = {
	// [
	LETTER2INT(0, 1, 1,
               0, 1, 0,
               0, 1, 0,
               0, 1, 0,
               0, 1, 1),

	/* \ */
	LETTER2INT(0, 0, 0,
               1, 0, 0,
               0, 1, 0,
               0, 0, 1,
               0, 0, 0),
	// ]
	LETTER2INT(1, 1, 0,
               0, 1, 0,
               0, 1, 0,
               0, 1, 0,
               1, 1, 0),
	// ^
	LETTER2INT(0, 1, 0,
               1, 0, 1,
               0, 0, 0,
               0, 0, 0,
               0, 0, 0),
	// _
	LETTER2INT(0, 0, 0,
               0, 0, 0,
               0, 0, 0,
               0, 0, 0,
               1, 1, 1),
	// `
	LETTER2INT(1, 0, 0,
               0, 1, 0,
               0, 0, 0,
               0, 0, 0,
               0, 0, 0),
};


/* Show this pattern if an ASCII character is not listed here. */
const uint16_t not_supported = LETTER2INT(0, 0, 0,
                                          0, 0, 0,
                                          0, 1, 0,
                                          0, 0, 0,
                                          0, 0, 0);

#ifdef __cplusplus
}
#endif /* CPP */
#endif /* include guard */