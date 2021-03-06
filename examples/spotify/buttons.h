#if defined(__AVR)
#include <avr/pgmspace.h>
#else
#define PROGMEM
#endif
// 'play', 32x32px
const unsigned char play [] PROGMEM = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x0f, 0xff, 0xfe, 0x00, 0x03, 0xff, 
	0xfc, 0x3f, 0xe1, 0xff, 0xf8, 0xff, 0xf8, 0x7f, 0xf1, 0xff, 0xfc, 0x7f, 0xe3, 0xff, 0xfe, 0x3f, 
	0xc7, 0xdf, 0xff, 0x1f, 0xcf, 0xc7, 0xff, 0x9f, 0x8f, 0xc1, 0xff, 0x8f, 0x9f, 0xc0, 0xff, 0xcf, 
	0x1f, 0xc0, 0x3f, 0xc7, 0x3f, 0xc0, 0x0f, 0xe7, 0x3f, 0xc0, 0x03, 0xe7, 0x3f, 0xc0, 0x00, 0xe7, 
	0x3f, 0xc0, 0x00, 0xe7, 0x3f, 0xc0, 0x03, 0xe7, 0x1f, 0xc0, 0x0f, 0xe7, 0x1f, 0xc0, 0x3f, 0xc7, 
	0x9f, 0xc0, 0xff, 0xcf, 0x8f, 0xc1, 0xff, 0x8f, 0xcf, 0xc7, 0xff, 0x9f, 0xc7, 0xdf, 0xff, 0x1f, 
	0xe3, 0xff, 0xfe, 0x3f, 0xf1, 0xff, 0xfc, 0x7f, 0xf8, 0xff, 0xf8, 0xff, 0xfc, 0x3f, 0xe1, 0xff, 
	0xfe, 0x00, 0x03, 0xff, 0xff, 0x80, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};


// 'pause', 32x32px
const unsigned char pause [] PROGMEM = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x0f, 0xff, 0xfe, 0x00, 0x03, 0xff, 
	0xfc, 0x3f, 0xe1, 0xff, 0xf8, 0xff, 0xf8, 0xff, 0xf1, 0xff, 0xfc, 0x7f, 0xe3, 0xff, 0xfe, 0x3f, 
	0xc7, 0xff, 0xff, 0x1f, 0xcf, 0x02, 0x07, 0x9f, 0x8f, 0x02, 0x07, 0x8f, 0x9f, 0x02, 0x07, 0xcf, 
	0x1f, 0x02, 0x07, 0xc7, 0x1f, 0x02, 0x07, 0xe7, 0x3f, 0x02, 0x07, 0xe7, 0x3f, 0x02, 0x07, 0xe7, 
	0x3f, 0x02, 0x07, 0xe7, 0x3f, 0x02, 0x07, 0xe7, 0x3f, 0x02, 0x07, 0xe7, 0x1f, 0x02, 0x07, 0xc7, 
	0x9f, 0x02, 0x07, 0xcf, 0x8f, 0x02, 0x07, 0x8f, 0xcf, 0x02, 0x07, 0x9f, 0xc7, 0xff, 0xff, 0x1f, 
	0xe3, 0xff, 0xfe, 0x3f, 0xf1, 0xff, 0xfc, 0x7f, 0xf8, 0xff, 0xf8, 0x7f, 0xfc, 0x3f, 0xe1, 0xff, 
	0xfe, 0x00, 0x03, 0xff, 0xff, 0x80, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

// 'next', 32x32px
const unsigned char next [] PROGMEM = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x7f, 0xff, 0xff, 0xf0, 0x7f, 0xfd, 0xff, 0xf0, 0x1f, 0xfc, 0x7f, 0xf0, 0x1f, 0xfc, 0x7f, 0xf0, 
	0x0f, 0xfc, 0x1f, 0xf0, 0x07, 0xfc, 0x1f, 0xf0, 0x03, 0xfc, 0x0f, 0xf0, 0x01, 0xfc, 0x07, 0xf0, 
	0x00, 0xfc, 0x03, 0xf0, 0x00, 0x3c, 0x00, 0xf0, 0x00, 0x3c, 0x00, 0xf0, 0x00, 0x0c, 0x00, 0x30, 
	0x00, 0x0c, 0x00, 0x30, 0x00, 0x3c, 0x00, 0xf0, 0x00, 0x3c, 0x00, 0xf0, 0x00, 0xfc, 0x03, 0xf0, 
	0x00, 0xfc, 0x07, 0xf0, 0x03, 0xfc, 0x0f, 0xf0, 0x07, 0xfc, 0x1f, 0xf0, 0x07, 0xfc, 0x1f, 0xf0, 
	0x1f, 0xfc, 0x7f, 0xf0, 0x1f, 0xfc, 0x7f, 0xf0, 0x7f, 0xfd, 0xff, 0xf0, 0x7f, 0xfd, 0xff, 0xf0, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};


// 'prev', 32x32px
const unsigned char prev [] PROGMEM = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x0f, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xbf, 0xfe, 0x0f, 0xff, 0x3f, 0xf8, 0x0f, 0xfe, 0x3f, 0xf8, 
	0x0f, 0xfc, 0x3f, 0xf0, 0x0f, 0xf8, 0x3f, 0xe0, 0x0f, 0xf0, 0x3f, 0xc0, 0x0f, 0xe0, 0x3f, 0x80, 
	0x0f, 0xc0, 0x3f, 0x00, 0x0f, 0x80, 0x3e, 0x00, 0x0f, 0x00, 0x3c, 0x00, 0x0e, 0x00, 0x38, 0x00, 
	0x0c, 0x00, 0x30, 0x00, 0x0f, 0x00, 0x3c, 0x00, 0x0f, 0x00, 0x3c, 0x00, 0x0f, 0xc0, 0x3f, 0x00, 
	0x0f, 0xe0, 0x3f, 0x80, 0x0f, 0xf0, 0x3f, 0xc0, 0x0f, 0xf8, 0x3f, 0xe0, 0x0f, 0xfc, 0x3f, 0xf0, 
	0x0f, 0xfe, 0x3f, 0xf8, 0x0f, 0xfe, 0x3f, 0xf8, 0x0f, 0xff, 0xbf, 0xfe, 0x0f, 0xff, 0xbf, 0xfe, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
