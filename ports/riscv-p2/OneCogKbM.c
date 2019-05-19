// automatically generated by spin2cpp v3.9.24 on Sun May 19 13:43:20 2019
// command line: spin2cpp --ccode --p2 OneCogKbM.spin2 

// ------------------------------------------------------------------------------
// garryj 05/2019
// TABs as space, width: 8.
// Serial terminal: Tera Term, Parallax Serial Terminal (set the cterm_type
// register to the appropriate TERM_* constant).
// #region (Shared constants)
#include "riscv.h"
#include "OneCogKbM.h"

#ifdef __GNUC__
#define INLINE__ static inline
#endif

static  void OneCogKbM_mydirl_(int32_t pin);
static  void OneCogKbM_mydirh_(int32_t pin);
static  void OneCogKbM_mywrpin_(int32_t mode, int32_t pin);

static char dat[] = {
  0x7b, 0xfd, 0x06, 0xf6, 0x03, 0x08, 0xdc, 0xfc, 0x00, 0xfc, 0x8e, 0xf9, 0xf8, 0x01, 0x00, 0xf6, 
  0x01, 0xfc, 0x06, 0xf1, 0x04, 0xf0, 0x07, 0xf1, 0x51, 0x70, 0x64, 0xfd, 0x59, 0x2a, 0x64, 0xfd, 
  0xb4, 0xc4, 0x04, 0xff, 0x00, 0xfc, 0x06, 0xf6, 0xbd, 0x01, 0x05, 0xff, 0x00, 0xfc, 0x1e, 0xf2, 
  0x00, 0x0a, 0x07, 0xe6, 0x14, 0x0a, 0x07, 0x16, 0x05, 0x00, 0x00, 0xff, 0x7c, 0xfd, 0x06, 0xf6, 
  0x03, 0x00, 0x00, 0xff, 0xfc, 0xfc, 0x86, 0xf1, 0x02, 0xfc, 0x46, 0xf0, 0xfc, 0x06, 0xa0, 0xfe, 
  0x29, 0xfc, 0x62, 0xfd, 0xf7, 0x01, 0x00, 0xfb, 0x18, 0x0c, 0xb0, 0xfd, 0xfb, 0xe8, 0x07, 0xf6, 
  0xe0, 0x0a, 0x90, 0xfd, 0x2d, 0x52, 0xc7, 0xf8, 0x08, 0x46, 0x07, 0xf6, 0x03, 0x24, 0x07, 0xf4, 
  0x0c, 0x34, 0x07, 0xf6, 0xf8, 0xed, 0x03, 0xf6, 0x1c, 0x01, 0xb0, 0xfd, 0xd2, 0x54, 0x0f, 0xf2, 
  0x2d, 0x00, 0x64, 0xad, 0xd4, 0x02, 0xb0, 0xfd, 0x05, 0x54, 0x0f, 0xf2, 0x2d, 0x00, 0x64, 0xad, 
  0xf6, 0xf1, 0x03, 0xf6, 0xe0, 0xff, 0x9f, 0xfd, 0x90, 0x02, 0xb0, 0xfd, 0x69, 0x52, 0xc7, 0xf8, 
  0xbc, 0x00, 0xb0, 0xfd, 0x16, 0x38, 0x87, 0xfa, 0x04, 0x38, 0x17, 0xf4, 0xf4, 0xff, 0x9f, 0xcd, 
  0x1a, 0x20, 0x63, 0xfd, 0x95, 0x21, 0x6b, 0xfa, 0x05, 0x24, 0x07, 0xf4, 0x00, 0x3a, 0x07, 0xf6, 
  0x16, 0x38, 0x8f, 0xfa, 0x04, 0x38, 0x17, 0xf4, 0x08, 0x00, 0x90, 0xcd, 0xfc, 0x25, 0xcc, 0xfb, 
  0x04, 0x54, 0x07, 0x06, 0x24, 0x02, 0xb0, 0xfd, 0x06, 0x38, 0x17, 0xf4, 0x04, 0x00, 0x90, 0x3d, 
  0x01, 0x54, 0x07, 0x06, 0xd2, 0x54, 0x0f, 0xf2, 0x5a, 0x54, 0x0f, 0x52, 0x1e, 0x54, 0x0f, 0x52, 
  0x38, 0x00, 0x90, 0xad, 0x03, 0x24, 0x17, 0xf4, 0xc3, 0x54, 0x0f, 0xf2, 0x24, 0x01, 0x90, 0x2d, 
  0x10, 0x00, 0x90, 0x8d, 0x4b, 0x54, 0x0f, 0xf2, 0x18, 0x01, 0x90, 0x8d, 0x04, 0x00, 0x90, 0x2d, 
  0x03, 0x54, 0x07, 0x06, 0x16, 0x38, 0x87, 0xfa, 0x05, 0x38, 0x17, 0xf4, 0xf4, 0xff, 0x9f, 0x3d, 
  0xd2, 0x54, 0x07, 0xf6, 0x9c, 0x01, 0xb0, 0xfd, 0x0b, 0x54, 0x07, 0x06, 0x02, 0x24, 0x17, 0xf4, 
  0x1c, 0x00, 0x90, 0x3d, 0xc4, 0x01, 0xb0, 0xfd, 0x05, 0x24, 0x17, 0xf4, 0x10, 0x00, 0x90, 0xcd, 
  0x06, 0x38, 0x0f, 0xf4, 0x03, 0x54, 0x07, 0x36, 0x01, 0x54, 0x07, 0xa6, 0x2d, 0x00, 0x64, 0xfd, 
  0x16, 0x38, 0x87, 0xfa, 0x00, 0x38, 0x17, 0xf4, 0xf4, 0xff, 0x9f, 0x3d, 0x2d, 0x00, 0x64, 0xfd, 
  0x16, 0x38, 0x87, 0xfa, 0x00, 0x38, 0x17, 0xf4, 0xf4, 0xff, 0x9f, 0x3d, 0x80, 0x36, 0x07, 0xf6, 
  0x74, 0x01, 0xb0, 0xfd, 0xa9, 0xfd, 0x02, 0xf6, 0x03, 0x4e, 0x07, 0xf6, 0x7e, 0x37, 0xe3, 0xf8, 
  0x08, 0xfc, 0x46, 0xf0, 0x40, 0x2e, 0x74, 0xfd, 0xf8, 0xff, 0x9f, 0x3d, 0x17, 0x02, 0x0c, 0xfc, 
  0x16, 0x36, 0x27, 0xfc, 0xf9, 0x4f, 0x6f, 0x0b, 0x90, 0x01, 0xb0, 0xfd, 0xc0, 0xff, 0xbf, 0xfd, 
  0x00, 0x00, 0xc0, 0xff, 0xf8, 0x01, 0x78, 0xfc, 0xa3, 0x4f, 0x03, 0xf6, 0x16, 0x38, 0x87, 0xfa, 
  0x04, 0x38, 0x17, 0xf4, 0xf4, 0xff, 0x9f, 0xcd, 0x94, 0x27, 0x03, 0xf6, 0x8c, 0x01, 0xb0, 0xfd, 
  0x80, 0x36, 0x07, 0xf6, 0x20, 0x01, 0xb0, 0xfd, 0x0f, 0x50, 0xcf, 0xf9, 0x03, 0x24, 0x17, 0xf4, 
  0xc3, 0x36, 0x07, 0x36, 0x4b, 0x36, 0x07, 0xc6, 0x0c, 0x01, 0xb0, 0xfd, 0x00, 0x4e, 0x0f, 0xf2, 
  0x24, 0x00, 0x90, 0xad, 0x10, 0x36, 0x63, 0xfd, 0xfc, 0x00, 0xb0, 0xfd, 0x69, 0x36, 0x63, 0xfd, 
  0x28, 0x36, 0x63, 0xfd, 0x50, 0x00, 0x00, 0xff, 0x01, 0x50, 0xdf, 0xf9, 0x50, 0x00, 0x00, 0xff, 
  0x01, 0x50, 0xdf, 0xf9, 0xf7, 0x4f, 0x6f, 0xfb, 0x7f, 0x00, 0x00, 0xff, 0xff, 0x51, 0x67, 0xf5, 
  0xa8, 0x37, 0xe3, 0xf8, 0xd0, 0x00, 0xb0, 0xfd, 0xa8, 0x37, 0xeb, 0xf8, 0xc8, 0x00, 0xb0, 0xfd, 
  0x80, 0xfe, 0x9f, 0xfd, 0xf7, 0x01, 0x03, 0xf6, 0xbb, 0x11, 0xa0, 0xfe, 0x00, 0x00, 0xc0, 0xff, 
  0xf7, 0x01, 0x88, 0xfc, 0x80, 0xef, 0x03, 0xf6, 0x0f, 0x50, 0xcf, 0xf9, 0x00, 0x4e, 0x07, 0xf6, 
  0xa3, 0x0f, 0x03, 0xf6, 0x02, 0x0e, 0x07, 0xf1, 0x16, 0x38, 0x87, 0xfa, 0x80, 0x36, 0x07, 0xf6, 
  0x9c, 0x37, 0x03, 0xf5, 0x9b, 0x3b, 0x0b, 0xf2, 0x80, 0x3a, 0x67, 0x55, 0x0c, 0x00, 0x90, 0x5d, 
  0x05, 0x38, 0x17, 0xf4, 0x40, 0x00, 0x90, 0xcd, 0xdc, 0xff, 0x9f, 0xfd, 0x9c, 0x55, 0xeb, 0xf8, 
  0x15, 0x54, 0x63, 0xfd, 0x69, 0x54, 0x63, 0xfd, 0x28, 0x54, 0x63, 0xfd, 0x50, 0x00, 0x00, 0xff, 
  0x01, 0x50, 0xdf, 0xf9, 0x50, 0x00, 0x00, 0xff, 0x01, 0x50, 0xdf, 0xf9, 0x01, 0x4e, 0x07, 0xf1, 
  0x87, 0x4f, 0x1b, 0xf2, 0x03, 0x54, 0x07, 0x16, 0x2d, 0x00, 0x64, 0x1d, 0x16, 0x38, 0x87, 0xfa, 
  0x04, 0x38, 0x17, 0xf4, 0xa0, 0xff, 0x9f, 0xcd, 0x02, 0x4e, 0x87, 0xf1, 0x58, 0x00, 0x00, 0xff, 
  0x01, 0x50, 0x6f, 0xf5, 0xec, 0xfd, 0x9f, 0x5d, 0xd2, 0x54, 0x07, 0xf6, 0x94, 0x27, 0x03, 0xf6, 
  0x88, 0x00, 0xb0, 0xfd, 0x80, 0x36, 0x07, 0xf6, 0x1c, 0x00, 0xb0, 0xfd, 0xaa, 0x37, 0x03, 0xf6, 
  0x14, 0x00, 0xb0, 0xfd, 0x16, 0x38, 0x87, 0xfa, 0x00, 0x38, 0x17, 0xf4, 0xf4, 0xff, 0x9f, 0x3d, 
  0x95, 0x27, 0x03, 0xf6, 0x64, 0x00, 0x90, 0xfd, 0x40, 0x2e, 0x74, 0xfd, 0xf8, 0xff, 0x9f, 0x3d, 
  0x17, 0x02, 0x0c, 0xfc, 0x1f, 0x0a, 0x63, 0xfd, 0x16, 0x36, 0x27, 0x0c, 0x16, 0x38, 0x8f, 0xfa, 
  0x80, 0x36, 0x07, 0xf6, 0x9c, 0x37, 0x03, 0xf5, 0x9b, 0x3b, 0x0b, 0xf2, 0x80, 0x3a, 0x67, 0x55, 
  0x9c, 0x55, 0xeb, 0x58, 0x2d, 0x00, 0x64, 0x5d, 0x04, 0x38, 0x17, 0xf4, 0x06, 0x38, 0x0f, 0xf4, 
  0xd8, 0xff, 0x9f, 0x4d, 0x05, 0x24, 0x27, 0x34, 0x2d, 0x00, 0x64, 0xfd, 0x00, 0x00, 0x07, 0xf6, 
  0x04, 0x24, 0x17, 0xf4, 0x01, 0x00, 0x07, 0xc1, 0xf4, 0xff, 0x9f, 0xcd, 0x00, 0x00, 0x0f, 0xf2, 
  0x2d, 0x00, 0x64, 0xad, 0x94, 0x27, 0x03, 0xf6, 0x00, 0x00, 0x90, 0xfd, 0x1a, 0x20, 0x63, 0xfd, 
  0x93, 0x21, 0x6b, 0xfa, 0xff, 0x25, 0xcc, 0xfb, 0x2d, 0x00, 0x64, 0xfd, 0x1e, 0x54, 0x0f, 0xf2, 
  0x2d, 0x00, 0x64, 0xad, 0x5a, 0x54, 0x0f, 0xf2, 0x18, 0x00, 0x90, 0xad, 0x4e, 0x00, 0x00, 0xff, 
  0x40, 0x26, 0x07, 0xf6, 0xd4, 0xff, 0xbf, 0xfd, 0x01, 0x34, 0x8f, 0xf1, 0x05, 0x54, 0x07, 0xa6, 
  0x2d, 0x00, 0x64, 0xfd, 0x0a, 0x00, 0x00, 0xff, 0xa0, 0x26, 0x07, 0xf6, 0xbc, 0xff, 0xbf, 0xfd, 
  0x00, 0x2c, 0x0f, 0xf2, 0x2d, 0x00, 0x64, 0xad, 0x01, 0x2c, 0x8f, 0xf1, 0x07, 0x54, 0x07, 0xa6, 
  0x2d, 0x00, 0x64, 0xfd, 0xff, 0x03, 0x00, 0xff, 0xff, 0x53, 0x07, 0xf5, 0xa9, 0xfd, 0x02, 0xf6, 
  0x08, 0xfc, 0x46, 0xf0, 0x1f, 0x50, 0x07, 0xf6, 0x69, 0xfc, 0x62, 0xfd, 0x28, 0xfc, 0x62, 0xfd, 
  0x14, 0x50, 0xdf, 0xf9, 0x14, 0x50, 0xdf, 0xf9, 0x09, 0xfc, 0x76, 0xf0, 0x14, 0x50, 0xd7, 0xf9, 
  0x01, 0xfc, 0x76, 0xf0, 0x14, 0x50, 0xd7, 0xf9, 0x01, 0xfc, 0x76, 0xf0, 0x14, 0x50, 0xd7, 0xf9, 
  0x1f, 0x50, 0x67, 0xf5, 0x13, 0x50, 0x67, 0xf0, 0xa8, 0x53, 0x43, 0x05, 0x04, 0x24, 0x17, 0xf4, 
  0x9c, 0x00, 0x90, 0x3d, 0x97, 0x1f, 0x63, 0xfa, 0x02, 0x24, 0x17, 0xf4, 0x10, 0x00, 0x90, 0x3d, 
  0x04, 0x36, 0x07, 0xf6, 0xe0, 0xfe, 0xbf, 0xfd, 0x94, 0x0d, 0x03, 0xf6, 0x68, 0x00, 0x90, 0xfd, 
  0x80, 0x36, 0x07, 0xf6, 0xd0, 0xfe, 0xbf, 0xfd, 0x1f, 0x4c, 0x07, 0xf6, 0xa4, 0x4b, 0x03, 0xf6, 
  0x69, 0x4a, 0x63, 0xfd, 0xa5, 0x36, 0x07, 0xf6, 0xbc, 0xfe, 0xbf, 0xfd, 0x28, 0x4a, 0x63, 0xfd, 
  0x14, 0x4c, 0xdf, 0xf9, 0x14, 0x4c, 0xdf, 0xf9, 0xa4, 0x37, 0xe3, 0xf8, 0xa8, 0xfe, 0xbf, 0xfd, 
  0x08, 0x4a, 0x67, 0xf0, 0x03, 0x04, 0xdc, 0xfc, 0x01, 0x4a, 0x77, 0xf0, 0x14, 0x4c, 0xd7, 0xf9, 
  0x1f, 0x4c, 0x67, 0xf5, 0xa4, 0x37, 0xeb, 0xf8, 0x03, 0x4c, 0x67, 0xf0, 0xa6, 0x37, 0x43, 0xf5, 
  0x84, 0xfe, 0xbf, 0xfd, 0x01, 0x48, 0x07, 0xf1, 0x03, 0x00, 0x00, 0xff, 0xff, 0x49, 0x07, 0xf5, 
  0x00, 0x00, 0x00, 0xff, 0x35, 0x0c, 0x07, 0xf6, 0x16, 0x36, 0x87, 0xfa, 0x04, 0x36, 0x17, 0xf4, 
  0xf4, 0xff, 0x9f, 0xcd, 0x1f, 0x0c, 0x63, 0xfd, 0x04, 0x24, 0x07, 0xf4, 0xf5, 0xff, 0x3b, 0xfb, 
  0x98, 0x1f, 0x63, 0xfa, 0x04, 0x24, 0x27, 0xf4, 0xf5, 0xff, 0x3b, 0xfb, 0x16, 0x38, 0x87, 0xfa, 
  0x01, 0x38, 0x17, 0xf4, 0x64, 0x00, 0xb0, 0xcd, 0x3c, 0x00, 0xb0, 0x3d, 0x25, 0x00, 0x64, 0xfd, 
  0x16, 0x02, 0x2c, 0xfc, 0x4f, 0x12, 0x80, 0xff, 0x1f, 0x00, 0x66, 0xfd, 0x16, 0x00, 0x2c, 0xfc, 
  0x04, 0x24, 0x07, 0xf4, 0x00, 0x48, 0x07, 0xf6, 0x1a, 0x1e, 0x63, 0xfd, 0x00, 0x00, 0x00, 0xff, 
  0x97, 0x1f, 0x67, 0xfa, 0x25, 0x02, 0x64, 0xfd, 0xa2, 0x19, 0x00, 0xff, 0x00, 0x27, 0x07, 0xf6, 
  0x68, 0xfe, 0xbf, 0xfd, 0x2d, 0x00, 0x64, 0xfd, 0x01, 0x01, 0x00, 0xff, 0x9a, 0x2f, 0x07, 0xf6, 
  0x36, 0x00, 0x00, 0xff, 0x59, 0x31, 0x07, 0xf6, 0x40, 0x40, 0x07, 0xf6, 0x00, 0x00, 0x00, 0xff, 
  0x76, 0x2b, 0x07, 0xf6, 0x00, 0x00, 0x00, 0xff, 0x35, 0x28, 0x07, 0x06, 0x00, 0x25, 0xcf, 0xf7, 
  0x40, 0x2e, 0x64, 0xad, 0x40, 0x2c, 0x64, 0xad, 0x80, 0x00, 0x80, 0xff, 0x17, 0xe0, 0x0c, 0xfc, 
  0x80, 0x00, 0x80, 0xff, 0x16, 0xe0, 0x0c, 0xfc, 0x01, 0x00, 0x80, 0xaf, 0x16, 0xcc, 0x1c, 0xac, 
  0x41, 0x2e, 0x64, 0xad, 0x41, 0x2c, 0x64, 0xad, 0xd0, 0x00, 0x00, 0xff, 0xda, 0x2e, 0x07, 0xf6, 
  0x68, 0x00, 0x00, 0xff, 0x19, 0x30, 0x07, 0xf6, 0x08, 0x40, 0x07, 0xf6, 0x04, 0x00, 0x00, 0xff, 
  0x2c, 0x2b, 0x07, 0xf6, 0x00, 0x00, 0x00, 0xff, 0xab, 0x29, 0x07, 0xf6, 0x02, 0x24, 0x27, 0x04, 
  0x61, 0xfd, 0xc6, 0xfa, 0xf7, 0xfd, 0x42, 0xfc, 0x01, 0xee, 0x07, 0xf1, 0xfc, 0x11, 0x6f, 0x0b, 
  0x53, 0x13, 0xc0, 0xfe, 0x00, 0x55, 0x67, 0xfc, 0x18, 0x02, 0x1c, 0xfc, 0x05, 0x02, 0x07, 0xf6, 
  0x5f, 0x70, 0x64, 0xfd, 0x70, 0x72, 0x00, 0xff, 0xc0, 0x27, 0x07, 0xf6, 0xbc, 0xfd, 0xbf, 0xfd, 
  0x16, 0x38, 0x87, 0xfa, 0x02, 0x38, 0x17, 0xf4, 0xe4, 0xff, 0x9f, 0x3d, 0xf8, 0x03, 0x6f, 0xfb, 
  0x2d, 0x00, 0x74, 0xcd, 0x05, 0x02, 0x07, 0xf6, 0xd4, 0xff, 0x9f, 0xfd, 0x1a, 0x22, 0x63, 0xfd, 
  0x00, 0x66, 0x0f, 0xf2, 0xc4, 0x09, 0x00, 0xaf, 0x00, 0x22, 0x77, 0xaa, 0xe2, 0x04, 0x00, 0x5f, 
  0x00, 0x22, 0x77, 0x5a, 0x73, 0x3d, 0x07, 0x56, 0xb0, 0x0e, 0x80, 0xfd, 0x1a, 0x22, 0x63, 0xfd, 
  0x00, 0x6e, 0x0f, 0xf2, 0xc4, 0x09, 0x00, 0xaf, 0x00, 0x22, 0x77, 0xaa, 0xe2, 0x04, 0x00, 0x5f, 
  0x00, 0x22, 0x77, 0x5a, 0x6b, 0x3d, 0x07, 0x56, 0xc8, 0x10, 0x80, 0xfd, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x07, 0xf6, 
  0x94, 0xfc, 0xbf, 0xfd, 0x02, 0x24, 0x17, 0xf4, 0x01, 0x18, 0x07, 0xc6, 0x02, 0x18, 0x07, 0x36, 
  0x00, 0x08, 0x00, 0xff, 0x00, 0x52, 0x07, 0xf6, 0x58, 0x11, 0xc0, 0xfe, 0x03, 0x81, 0x5c, 0xfc, 
  0x3b, 0x12, 0xa0, 0xfe, 0xe4, 0x00, 0xb0, 0xfd, 0xd2, 0x54, 0x0f, 0xf2, 0x1c, 0x00, 0x90, 0xad, 
  0x5a, 0x62, 0x02, 0xff, 0x00, 0x26, 0x07, 0xf6, 0x0c, 0xfb, 0xbf, 0xfd, 0x01, 0x10, 0x8f, 0xf1, 
  0x28, 0xfd, 0x9f, 0xad, 0x60, 0xfc, 0xbf, 0xfd, 0xb8, 0xff, 0x9f, 0xfd, 0x3b, 0x12, 0x80, 0xfe, 
  0x07, 0xec, 0x07, 0xf1, 0xf6, 0x41, 0xc3, 0xfa, 0x38, 0x01, 0x00, 0xff, 0x00, 0x27, 0x07, 0xf6, 
  0xe4, 0xfa, 0xbf, 0xfd, 0x40, 0xfc, 0xbf, 0xfd, 0x70, 0x11, 0xc0, 0xfe, 0x01, 0x03, 0x5c, 0xfc, 
  0xc4, 0x01, 0xb0, 0xfd, 0xd2, 0x54, 0x0f, 0xf2, 0x2d, 0x00, 0x64, 0x5d, 0xc4, 0x09, 0x00, 0xff, 
  0x00, 0x26, 0x07, 0xf6, 0xc0, 0xfa, 0xbf, 0xfd, 0x00, 0x00, 0x00, 0xff, 0x00, 0x53, 0x07, 0xf6, 
  0x0c, 0xfb, 0xbf, 0xfd, 0x58, 0x11, 0xc0, 0xfe, 0x3b, 0x12, 0xa0, 0xfe, 0xf7, 0x43, 0xc3, 0xfa, 
  0x03, 0x43, 0x57, 0xfc, 0x64, 0x00, 0xb0, 0xfd, 0xd2, 0x54, 0x0f, 0xf2, 0x2d, 0x00, 0x64, 0x5d, 
  0xa9, 0x59, 0x03, 0xf6, 0x3b, 0x12, 0xc0, 0xfe, 0x07, 0x5b, 0xc7, 0xfa, 0x9c, 0x00, 0x00, 0xff, 
  0x80, 0x26, 0x07, 0xf6, 0x80, 0xfa, 0xbf, 0xfd, 0x60, 0x11, 0xc0, 0xfe, 0x03, 0xff, 0x5d, 0xfc, 
  0x4d, 0x12, 0xa0, 0xfe, 0x34, 0x00, 0xb0, 0xfd, 0xd2, 0x54, 0x0f, 0xf2, 0x2d, 0x00, 0x64, 0x5d, 
  0x4d, 0x12, 0xc0, 0xfe, 0xf8, 0x5d, 0x03, 0xf6, 0x61, 0x11, 0xc7, 0xfa, 0x61, 0x13, 0xc7, 0xfa, 
  0x00, 0xfd, 0xe6, 0xfa, 0x09, 0x10, 0x1f, 0xf2, 0x02, 0x12, 0x1f, 0x32, 0xa1, 0xfd, 0x1a, 0xa2, 
  0x0c, 0x54, 0x07, 0xc6, 0x64, 0xfc, 0x9f, 0xcd, 0xbc, 0x0b, 0x80, 0xfd, 0xa9, 0x19, 0x03, 0xf6, 
  0xf8, 0x1b, 0x03, 0xf6, 0xf7, 0x1d, 0x03, 0xf6, 0x0c, 0x32, 0x07, 0xf6, 0x03, 0x43, 0xe7, 0xfa, 
  0x3c, 0xf7, 0xbf, 0xfd, 0xd2, 0x54, 0x0f, 0xf2, 0x2d, 0x00, 0x64, 0x5d, 0x00, 0x42, 0x0f, 0xf2, 
  0x84, 0x01, 0x90, 0xad, 0x00, 0x44, 0x07, 0xf6, 0x61, 0x00, 0x00, 0xff, 0x50, 0x2d, 0x07, 0xf6, 
  0x03, 0x24, 0x27, 0xf4, 0xa1, 0x47, 0x03, 0xf6, 0xa2, 0x47, 0x83, 0xf1, 0xa0, 0x47, 0x1b, 0xf2, 
  0xa0, 0x47, 0x03, 0x16, 0x0c, 0x34, 0x07, 0xf6, 0x38, 0xf7, 0xbf, 0xfd, 0xd2, 0x54, 0x0f, 0xf2, 
  0x28, 0x00, 0x90, 0xad, 0x1e, 0x54, 0x0f, 0xf2, 0xa4, 0x00, 0x90, 0xad, 0xe8, 0xf9, 0xbf, 0xfd, 
  0x5a, 0x54, 0x0f, 0xf2, 0xdc, 0xff, 0x9f, 0xad, 0x07, 0x54, 0x0f, 0xf2, 0x90, 0x00, 0x90, 0xad, 
  0x05, 0x54, 0x0f, 0xf2, 0xd0, 0xff, 0x9f, 0x5d, 0x2d, 0x00, 0x64, 0xfd, 0x00, 0x4e, 0x0f, 0xf2, 
  0x34, 0x00, 0x90, 0xad, 0xbb, 0x11, 0xc0, 0xfe, 0xa7, 0x11, 0x03, 0xf6, 0xbc, 0xfb, 0xbf, 0xfd, 
  0xa7, 0x45, 0x03, 0xf1, 0xa1, 0x45, 0x0b, 0xf2, 0x1c, 0x00, 0x90, 0xad, 0xa3, 0x4f, 0x1b, 0xf2, 
  0x14, 0x00, 0x90, 0xcd, 0x03, 0x54, 0x07, 0x16, 0xaa, 0x57, 0x03, 0x16, 0x2d, 0x00, 0x64, 0x1d, 
  0x03, 0x24, 0xe7, 0xf4, 0x7c, 0xff, 0x9f, 0xfd, 0xa2, 0x43, 0x03, 0xf6, 0xe1, 0x52, 0xc7, 0xf8, 
  0x00, 0x46, 0x07, 0xf6, 0x03, 0x24, 0x27, 0xf4, 0x0c, 0x34, 0x07, 0xf6, 0x61, 0x00, 0x00, 0xff, 
  0x50, 0x2d, 0x07, 0xf6, 0xac, 0xf7, 0xbf, 0xfd, 0xd2, 0x54, 0x0f, 0xf2, 0x2d, 0x00, 0x64, 0xad, 
  0x1e, 0x54, 0x0f, 0xf2, 0x18, 0x00, 0x90, 0xad, 0x5c, 0xf9, 0xbf, 0xfd, 0x07, 0x54, 0x0f, 0xf2, 
  0x0c, 0x00, 0x90, 0xad, 0x05, 0x54, 0x0f, 0xf2, 0xd8, 0xff, 0x9f, 0x5d, 0x2d, 0x00, 0x64, 0xfd, 
  0x1a, 0x06, 0x00, 0xff, 0x00, 0x27, 0x07, 0xf6, 0x2c, 0xf9, 0xbf, 0xfd, 0x08, 0xf9, 0xbf, 0xfd, 
  0x8c, 0x53, 0x03, 0xf6, 0x8d, 0xf1, 0x03, 0xf6, 0x8e, 0xef, 0x03, 0xf6, 0xbb, 0x33, 0x6f, 0xfb, 
  0xaa, 0x57, 0x03, 0xf6, 0x06, 0x54, 0x07, 0x06, 0xa9, 0x19, 0x03, 0xf6, 0xf8, 0x1b, 0x03, 0xf6, 
  0xf7, 0x1d, 0x03, 0xf6, 0x0c, 0x32, 0x07, 0xf6, 0x00, 0x2c, 0x07, 0xf6, 0x03, 0x43, 0xe7, 0xfa, 
  0x0c, 0xf6, 0xbf, 0xfd, 0xd2, 0x54, 0x0f, 0xf2, 0x2d, 0x00, 0x64, 0x5d, 0x00, 0x42, 0x0f, 0xf2, 
  0x54, 0x00, 0x90, 0xad, 0x00, 0x44, 0x07, 0xf6, 0xe1, 0x52, 0xc7, 0xf8, 0x03, 0x24, 0x27, 0xf4, 
  0x0c, 0x34, 0x07, 0xf6, 0xa1, 0x47, 0x03, 0xf6, 0xa2, 0x47, 0x83, 0xf1, 0xa0, 0x47, 0x1b, 0xf2, 
  0xa0, 0x47, 0x03, 0x16, 0xf7, 0xf1, 0x03, 0xf6, 0x08, 0xf7, 0xbf, 0xfd, 0xd2, 0x54, 0x0f, 0xf2, 
  0x10, 0x00, 0x90, 0xad, 0xc0, 0xf8, 0xbf, 0xfd, 0x05, 0x54, 0x0f, 0xf2, 0xe4, 0xff, 0x9f, 0x5d, 
  0x2d, 0x00, 0x64, 0xfd, 0xf8, 0xef, 0x03, 0xf6, 0xa3, 0x45, 0x03, 0xf1, 0xa1, 0x45, 0x0b, 0xf2, 
  0x03, 0x24, 0xe7, 0x54, 0xbc, 0xff, 0x9f, 0x5d, 0x03, 0x24, 0x27, 0xf4, 0x0c, 0x34, 0x07, 0xf6, 
  0x00, 0x46, 0x07, 0xf6, 0xcc, 0xf5, 0xbf, 0xfd, 0xd2, 0x54, 0x0f, 0xf2, 0x00, 0x46, 0x0f, 0xa2, 
  0x2d, 0x00, 0x64, 0xad, 0x80, 0xf8, 0xbf, 0xfd, 0x05, 0x54, 0x0f, 0xf2, 0xe0, 0xff, 0x9f, 0x5d, 
  0x2d, 0x00, 0x64, 0xfd, 0x8e, 0xfd, 0x32, 0xf9, 0xc3, 0xfc, 0x0e, 0xf2, 0x03, 0x24, 0xa7, 0xf4, 
  0x0c, 0x34, 0x07, 0xf6, 0x8e, 0x47, 0x3b, 0xf9, 0x98, 0xf5, 0xbf, 0xfd, 0xd2, 0x54, 0x0f, 0xf2, 
  0x1c, 0x00, 0x90, 0xad, 0x5a, 0x54, 0x0f, 0xf2, 0x1e, 0x54, 0x0f, 0x52, 0x28, 0x00, 0x90, 0xad, 
  0x44, 0xf8, 0xbf, 0xfd, 0x05, 0x54, 0x0f, 0xf2, 0x1c, 0x00, 0x90, 0xad, 0xd4, 0xff, 0x9f, 0xfd, 
  0x00, 0x4e, 0x0f, 0xf2, 0x10, 0x00, 0x90, 0xad, 0xbb, 0x11, 0xc0, 0xfe, 0x8d, 0xef, 0x03, 0xf6, 
  0xa7, 0x11, 0x03, 0xf6, 0x24, 0xfa, 0xbf, 0xfd, 0xa7, 0x1d, 0x03, 0xf6, 0x2d, 0x00, 0x64, 0xfd, 
  0x25, 0x00, 0x64, 0xfd, 0x40, 0x2e, 0x64, 0xfd, 0x40, 0x2c, 0x64, 0xfd, 0x80, 0x00, 0x80, 0xff, 
  0x17, 0xe4, 0x0c, 0xfc, 0x80, 0x00, 0x80, 0xff, 0x16, 0xe4, 0x0c, 0xfc, 0x09, 0x00, 0x80, 0xff, 
  0x16, 0x66, 0x1e, 0xfc, 0x41, 0x2c, 0x64, 0xfd, 0x41, 0x2e, 0x64, 0xfd, 0x03, 0x00, 0x80, 0xff, 
  0x1f, 0x80, 0x64, 0xfd, 0x00, 0x00, 0x80, 0xff, 0x16, 0x00, 0x2c, 0xfc, 0x92, 0xed, 0x07, 0xf6, 
  0x00, 0xec, 0x8f, 0xf9, 0x00, 0x00, 0x04, 0xf6, 0x01, 0xec, 0x07, 0xf1, 0xbf, 0xed, 0x0f, 0xf2, 
  0xec, 0xff, 0x9f, 0x5d, 0x57, 0x13, 0xc0, 0xfe, 0x12, 0x02, 0x07, 0xf6, 0x61, 0x01, 0x6c, 0xfc, 
  0xfe, 0x03, 0x6f, 0xfb, 0x01, 0x00, 0x00, 0xff, 0x1d, 0x3d, 0x07, 0xf6, 0x2d, 0x3c, 0x63, 0xfd, 
  0x24, 0x06, 0x70, 0xfd, 0x2d, 0x3c, 0x63, 0xcd, 0x16, 0x38, 0x87, 0xfa, 0x03, 0x38, 0x1f, 0xf5, 
  0xec, 0xff, 0x9f, 0xad, 0x2c, 0x00, 0x90, 0x5d, 0x12, 0x7a, 0x00, 0xff, 0x00, 0x26, 0x07, 0xf6, 
  0x74, 0xf7, 0xbf, 0xfd, 0x16, 0x38, 0x87, 0xfa, 0x03, 0x38, 0x1f, 0xf5, 0x00, 0x54, 0x07, 0x56, 
  0xcc, 0xff, 0x9f, 0x5d, 0x12, 0x7a, 0x80, 0xff, 0x1f, 0x00, 0x64, 0xfd, 0x02, 0x54, 0x07, 0xf6, 
  0x78, 0xf9, 0xbf, 0xfd, 0x12, 0x7a, 0x00, 0xff, 0x00, 0x26, 0x07, 0xf6, 0x48, 0xf7, 0xbf, 0xfd, 
  0x16, 0x38, 0x87, 0xfa, 0x03, 0x38, 0x1f, 0xf5, 0xa4, 0xff, 0x9f, 0xad, 0xb8, 0xff, 0x9f, 0xad, 
  0x01, 0x24, 0x27, 0xf4, 0x59, 0x28, 0x64, 0xfd, 0xe0, 0xfb, 0xbf, 0xfd, 0xd2, 0x54, 0x0f, 0xf2, 
  0x8c, 0xff, 0x9f, 0x5d, 0x16, 0x38, 0x87, 0xfa, 0x02, 0x38, 0x17, 0xf4, 0x0c, 0x00, 0x90, 0xcd, 
  0x24, 0x06, 0x70, 0xfd, 0x2d, 0x3c, 0x63, 0xcd, 0xe8, 0xff, 0x9f, 0xfd, 0x38, 0x01, 0x00, 0xff, 
  0x00, 0x27, 0x07, 0xf6, 0x00, 0xf7, 0xbf, 0xfd, 0x16, 0x38, 0x87, 0xfa, 0x02, 0x38, 0x17, 0xf4, 
  0xd0, 0xff, 0x9f, 0x3d, 0xd0, 0xf6, 0xbf, 0xfd, 0x25, 0x00, 0x64, 0xfd, 0x00, 0x00, 0x80, 0xff, 
  0x16, 0x00, 0x2c, 0xfc, 0x59, 0x28, 0x64, 0xfd, 0x18, 0x0c, 0x1c, 0xfc, 0xd0, 0xfe, 0x9f, 0xfd, 
  0x1a, 0x22, 0x63, 0xfd, 0x87, 0x93, 0x03, 0xff, 0x00, 0x22, 0x77, 0xfa, 0x5f, 0x28, 0x64, 0x0d, 
  0x8c, 0xff, 0x02, 0xf6, 0x81, 0x01, 0x03, 0xf6, 0xff, 0x19, 0x1f, 0xf2, 0x01, 0x00, 0x00, 0x1f, 
  0x00, 0xfe, 0x86, 0x11, 0xff, 0x19, 0x1f, 0xf2, 0x00, 0xfe, 0x96, 0xe9, 0x00, 0xfc, 0x02, 0xe6, 
  0x7f, 0xfd, 0xa2, 0x1a, 0x8d, 0xfd, 0x62, 0xfc, 0x01, 0xfe, 0x06, 0xf1, 0x04, 0x1a, 0x07, 0xf1, 
  0xf8, 0x01, 0x6f, 0xfb, 0x7b, 0x19, 0x63, 0xfc, 0x7c, 0x03, 0x63, 0x0c, 0x84, 0x02, 0xb0, 0xfd, 
  0x02, 0xec, 0x07, 0xf6, 0xae, 0xed, 0x03, 0xf1, 0xf6, 0x5f, 0xe3, 0xfa, 0xd3, 0x00, 0xa0, 0xfd, 
  0xae, 0x65, 0xc3, 0xfa, 0x04, 0x62, 0x07, 0xf6, 0xdc, 0x00, 0xb0, 0xfd, 0x00, 0xf2, 0x0f, 0xf2, 
  0x08, 0x01, 0x90, 0xad, 0x80, 0xfd, 0xc6, 0xfa, 0x7e, 0x65, 0x03, 0xf1, 0x82, 0x61, 0xc7, 0xfa, 
  0x85, 0xfd, 0xc6, 0xfa, 0x03, 0xfc, 0x0e, 0xf2, 0xd8, 0xff, 0x9f, 0x5d, 0x86, 0xfd, 0xc6, 0xfa, 
  0x01, 0xfc, 0x0e, 0xf2, 0xcc, 0xff, 0x9f, 0x5d, 0x87, 0x17, 0xcf, 0xfa, 0xc4, 0xff, 0x9f, 0xad, 
  0xf9, 0x07, 0x03, 0xf6, 0xb2, 0x09, 0x03, 0xf6, 0x05, 0x62, 0x07, 0xf6, 0x98, 0x00, 0xb0, 0xfd, 
  0x00, 0xf2, 0x0f, 0xf2, 0x0c, 0x00, 0x90, 0x5d, 0x84, 0x65, 0x03, 0xf6, 0x83, 0xf3, 0x03, 0xf6, 
  0xa0, 0xff, 0x9f, 0xfd, 0x82, 0x13, 0xc7, 0xfa, 0x07, 0x12, 0x17, 0xf4, 0xe8, 0xff, 0x9f, 0x3d, 
  0x0f, 0x12, 0x67, 0xf0, 0x04, 0xf2, 0x07, 0xf1, 0xe1, 0x15, 0xe7, 0xfa, 0x03, 0x00, 0x00, 0xff, 
  0xff, 0x15, 0x07, 0xf5, 0x80, 0x11, 0xc7, 0xfa, 0x84, 0x65, 0x03, 0xf6, 0x83, 0xf3, 0x03, 0xf6, 
  0x01, 0x16, 0x0f, 0xf2, 0x24, 0x00, 0x90, 0x5d, 0x90, 0x11, 0xc0, 0xfe, 0x61, 0x61, 0x47, 0xfc, 
  0x61, 0x11, 0x47, 0xfc, 0xac, 0x6f, 0x03, 0xf6, 0x3f, 0x00, 0x00, 0xff, 0x00, 0x6f, 0x07, 0xf5, 
  0x89, 0x6f, 0x43, 0xf5, 0x00, 0x15, 0x47, 0xfc, 0x48, 0xff, 0x9f, 0xfd, 0x02, 0x16, 0x0f, 0xf2, 
  0x40, 0xff, 0x9f, 0x5d, 0xa7, 0x11, 0xc0, 0xfe, 0x61, 0x61, 0x47, 0xfc, 0x61, 0x11, 0x47, 0xfc, 
  0xac, 0x67, 0x03, 0xf6, 0x3f, 0x00, 0x00, 0xff, 0x00, 0x67, 0x07, 0xf5, 0x89, 0x67, 0x43, 0xf5, 
  0x00, 0x15, 0x47, 0xfc, 0x1c, 0xff, 0x9f, 0xfd, 0xb2, 0x05, 0x03, 0xf6, 0xaf, 0x65, 0x1b, 0xf2, 
  0x00, 0xf2, 0x07, 0x36, 0x82, 0x65, 0x03, 0x36, 0x2d, 0x00, 0x64, 0x3d, 0xae, 0xf3, 0x03, 0xf6, 
  0xb2, 0xf3, 0x03, 0xf1, 0x81, 0xfd, 0xc6, 0xfa, 0xb1, 0xfd, 0x0a, 0xf2, 0x2d, 0x00, 0x64, 0xad, 
  0x80, 0xfd, 0xc6, 0xfa, 0x7e, 0x65, 0x03, 0xf1, 0xd0, 0xff, 0x9f, 0xfd, 0x02, 0x00, 0x07, 0xf6, 
  0x00, 0x6e, 0x0f, 0xf2, 0x00, 0x66, 0x0f, 0xa2, 0x44, 0x01, 0x90, 0xad, 0x68, 0x11, 0xc0, 0xfe, 
  0x05, 0xec, 0x07, 0xf6, 0xae, 0xed, 0x03, 0xf1, 0xf6, 0x19, 0xc3, 0xfa, 0x01, 0x19, 0x57, 0xfc, 
  0xac, 0x53, 0x03, 0xf6, 0x00, 0xee, 0x07, 0xf6, 0x8f, 0x02, 0xa0, 0xfd, 0xd2, 0x54, 0x0f, 0xf2, 
  0x2d, 0x00, 0x64, 0x5d, 0x00, 0x6e, 0x0f, 0xf2, 0x98, 0x00, 0x90, 0xad, 0x90, 0x11, 0xc0, 0xfe, 
  0x00, 0xfd, 0xc6, 0xfa, 0x78, 0x11, 0xc0, 0xfe, 0x01, 0x01, 0x5c, 0xfc, 0x02, 0xfd, 0x56, 0xfc, 
  0x00, 0xee, 0x07, 0xf6, 0x8f, 0x02, 0xa0, 0xfd, 0xd2, 0x54, 0x0f, 0xf2, 0x00, 0x6e, 0x07, 0x56, 
  0x70, 0x00, 0x90, 0x5d, 0x00, 0x18, 0x07, 0xf6, 0x90, 0x11, 0xc0, 0xfe, 0x00, 0x1b, 0xc7, 0xfa, 
  0x0c, 0x01, 0xb0, 0xfd, 0xd2, 0x54, 0x0f, 0xf2, 0x00, 0x6e, 0x07, 0x56, 0x54, 0x00, 0x90, 0x5d, 
  0x71, 0x02, 0x00, 0xff, 0x00, 0x26, 0x07, 0xf6, 0xd3, 0x00, 0xa0, 0xfd, 0x0c, 0x01, 0xb0, 0xfd, 
  0xd2, 0x54, 0x0f, 0xf2, 0x00, 0x6e, 0x07, 0x56, 0x38, 0x00, 0x90, 0x5d, 0xa6, 0x11, 0xc0, 0xfe, 
  0x00, 0x01, 0x4c, 0xfc, 0xb7, 0x53, 0x03, 0xf6, 0xe9, 0x00, 0xa0, 0xfd, 0xa9, 0x6f, 0x03, 0xf6, 
  0xac, 0x53, 0x03, 0xf6, 0x00, 0x72, 0x07, 0xf6, 0x00, 0x00, 0x00, 0xff, 0x3e, 0x74, 0x07, 0xf6, 
  0x6b, 0x3d, 0x07, 0xf6, 0x03, 0x00, 0x07, 0xf6, 0x1a, 0x22, 0x63, 0xfd, 0xc4, 0x09, 0x00, 0xff, 
  0x00, 0x22, 0x77, 0xfa, 0x00, 0x66, 0x0f, 0xf2, 0x74, 0x00, 0x90, 0xad, 0xa7, 0x11, 0xc0, 0xfe, 
  0x00, 0xfd, 0xc6, 0xfa, 0x78, 0x11, 0xc0, 0xfe, 0x01, 0x01, 0x5c, 0xfc, 0x02, 0xfd, 0x56, 0xfc, 
  0x00, 0xee, 0x07, 0xf6, 0x8f, 0x02, 0xa0, 0xfd, 0xd2, 0x54, 0x0f, 0xf2, 0x00, 0x66, 0x07, 0x56, 
  0x2d, 0x00, 0x64, 0x5d, 0x00, 0x6e, 0x0f, 0xf2, 0x1c, 0x00, 0x90, 0x5d, 0x00, 0x18, 0x07, 0xf6, 
  0xa7, 0x11, 0xc0, 0xfe, 0x00, 0x1b, 0xc7, 0xfa, 0x64, 0x00, 0xb0, 0xfd, 0xd2, 0x54, 0x0f, 0xf2, 
  0x00, 0x66, 0x07, 0x56, 0x2d, 0x00, 0x64, 0x5d, 0xb3, 0x53, 0x03, 0xf6, 0xe9, 0x00, 0xa0, 0xfd, 
  0xa9, 0x67, 0x03, 0xf6, 0x00, 0x6e, 0x0f, 0xf2, 0x05, 0x00, 0x07, 0x56, 0x04, 0x00, 0x07, 0xa6, 
  0x73, 0x3d, 0x07, 0xa6, 0x1a, 0x22, 0x63, 0xad, 0xc4, 0x09, 0x00, 0xaf, 0x00, 0x22, 0x77, 0xaa, 
  0x18, 0x00, 0x17, 0x0c, 0x00, 0x6e, 0x07, 0xf6, 0x00, 0x66, 0x07, 0xf6, 0x90, 0x11, 0xc0, 0xfe, 
  0xbb, 0x11, 0x80, 0xfe, 0x61, 0x01, 0x4c, 0xfc, 0xf6, 0xf1, 0x0b, 0xf2, 0xf4, 0xff, 0x9f, 0x5d, 
  0x93, 0x11, 0xc0, 0xfe, 0x00, 0x87, 0x4d, 0xfc, 0xaa, 0x11, 0xc0, 0xfe, 0x00, 0x87, 0x4d, 0x0c, 
  0x71, 0x02, 0x00, 0xff, 0x00, 0x26, 0x07, 0xf6, 0xd3, 0x00, 0xa0, 0xfd, 0x80, 0x11, 0xc0, 0xfe, 
  0x01, 0x19, 0x57, 0xfc, 0x02, 0x1b, 0x57, 0xfc, 0x8f, 0x02, 0x80, 0xfd, 0x90, 0x11, 0xc0, 0xfe, 
  0x00, 0xfd, 0xc6, 0xfa, 0x88, 0x11, 0xc0, 0xfe, 0x01, 0x00, 0x80, 0xff, 0x01, 0x01, 0x5c, 0xfc, 
  0x02, 0xfd, 0x56, 0xfc, 0x03, 0x03, 0x5c, 0xfc, 0x95, 0x11, 0xa0, 0xfe, 0x8f, 0x02, 0x80, 0xfd, 
  0xb7, 0x53, 0x03, 0xf6, 0x92, 0x11, 0xc0, 0xfe, 0x61, 0xfd, 0xc6, 0xfa, 0x00, 0x1d, 0xc7, 0xfa, 
  0x7e, 0x1d, 0x2b, 0xf9, 0x96, 0x11, 0xc0, 0xfe, 0xf8, 0x1b, 0x03, 0xf6, 0xba, 0x02, 0xa0, 0xfd, 
  0xd2, 0x54, 0x0f, 0xf2, 0x50, 0x00, 0x90, 0xad, 0x5a, 0x54, 0x0f, 0xf2, 0x5c, 0x01, 0x80, 0x5d, 
  0x01, 0x72, 0x07, 0xf1, 0xba, 0x73, 0x1b, 0xf2, 0x2d, 0x00, 0x64, 0xcd, 0x00, 0x00, 0x00, 0xff, 
  0x3e, 0x72, 0x0f, 0xf2, 0x5f, 0x28, 0x64, 0xad, 0xa6, 0x11, 0xc0, 0xfe, 0x00, 0x19, 0xc7, 0xfa, 
  0x39, 0x18, 0x0f, 0xf2, 0x00, 0x18, 0x07, 0xa6, 0x00, 0x18, 0x0f, 0xf2, 0x00, 0x00, 0x00, 0xaf, 
  0x3e, 0x74, 0x07, 0xa6, 0x00, 0x72, 0x07, 0xa6, 0x2d, 0x00, 0x64, 0xad, 0x00, 0x00, 0x00, 0xff, 
  0x05, 0x74, 0x07, 0xf1, 0x7c, 0x01, 0x90, 0xfd, 0x00, 0x1c, 0x0f, 0xf2, 0x2d, 0x00, 0x64, 0xad, 
  0x5f, 0x28, 0x64, 0xfd, 0x93, 0x11, 0xc0, 0xfe, 0x00, 0x19, 0xc7, 0xfa, 0xc3, 0x18, 0x0f, 0xf2, 
  0x4b, 0x18, 0x07, 0xa6, 0xc3, 0x18, 0x07, 0x56, 0x61, 0x19, 0x47, 0xfc, 0x00, 0x1d, 0x47, 0xfc, 
  0x28, 0x00, 0xb0, 0xfd, 0x95, 0x11, 0xc0, 0xfe, 0x00, 0xfd, 0xc6, 0xfa, 0x7e, 0x7d, 0x0b, 0xf2, 
  0x2d, 0x00, 0x64, 0xad, 0x00, 0x7d, 0x47, 0xfc, 0xac, 0x53, 0x03, 0xf6, 0x1c, 0xff, 0xbf, 0xfd, 
  0xd2, 0x54, 0x0f, 0xf2, 0x5c, 0x01, 0x80, 0x5d, 0x2d, 0x00, 0x64, 0xfd, 0x00, 0x1c, 0x07, 0xf6, 
  0x98, 0x11, 0xe0, 0xfe, 0xe1, 0x19, 0xc7, 0xfa, 0x03, 0x18, 0x1f, 0xf2, 0x18, 0x00, 0x90, 0x1d, 
  0x00, 0x18, 0x0f, 0xf2, 0x3c, 0x00, 0x90, 0xad, 0x9e, 0x11, 0xc0, 0xfe, 0x96, 0x11, 0xa0, 0xfe, 
  0x08, 0x10, 0x07, 0xf6, 0x58, 0x01, 0x80, 0xfd, 0x94, 0x11, 0xc0, 0xfe, 0x00, 0x11, 0xc7, 0xfa, 
  0x88, 0x17, 0x03, 0xf6, 0x96, 0x11, 0xc0, 0xfe, 0xf8, 0x17, 0x03, 0xf1, 0x00, 0x18, 0x0f, 0xf2, 
  0x10, 0x00, 0x90, 0xad, 0x38, 0x00, 0xb0, 0xfd, 0x8b, 0xf3, 0x0b, 0xf2, 0xe1, 0x19, 0xc7, 0x5a, 
  0xe8, 0xff, 0x9f, 0x5d, 0xa6, 0x11, 0xc0, 0xfe, 0x00, 0xfd, 0xc6, 0xfa, 0x7e, 0x1d, 0x0b, 0xf2, 
  0x00, 0x00, 0x00, 0x5f, 0x3e, 0x74, 0x07, 0x56, 0x00, 0x72, 0x07, 0x56, 0x00, 0x1d, 0x47, 0x5c, 
  0x96, 0x11, 0xc0, 0xfe, 0x9e, 0x11, 0xa0, 0xfe, 0x08, 0x10, 0x07, 0xf6, 0x58, 0x01, 0x80, 0xfd, 
  0xa0, 0x11, 0xc0, 0xfe, 0x9e, 0x11, 0xa0, 0xfe, 0x88, 0xef, 0x03, 0xf1, 0x61, 0xfd, 0xc6, 0xfa, 
  0x8c, 0xfd, 0x0a, 0xf2, 0x8c, 0x1d, 0x03, 0xa6, 0x2d, 0x00, 0x64, 0xad, 0xf7, 0xf1, 0x0b, 0xf2, 
  0xe8, 0xff, 0x9f, 0x5d, 0x8c, 0x77, 0x03, 0xf6, 0xbe, 0xfd, 0x02, 0xf6, 0x39, 0x18, 0x0f, 0xf2, 
  0x01, 0xfc, 0xe6, 0xa4, 0x47, 0x18, 0x0f, 0xf2, 0x02, 0xfc, 0xe6, 0xa4, 0x53, 0x18, 0x0f, 0xf2, 
  0x00, 0xfc, 0xe6, 0xa4, 0xbe, 0xfd, 0x0a, 0xf2, 0x7e, 0x7d, 0x03, 0x56, 0x8c, 0x1d, 0x03, 0xf6, 
  0x9f, 0x13, 0xc0, 0xfe, 0x01, 0x18, 0x67, 0xf0, 0x8c, 0xf1, 0x03, 0xf1, 0x00, 0x1b, 0xe7, 0xfa, 
  0x01, 0x18, 0x47, 0xf0, 0x96, 0x11, 0xc0, 0xfe, 0x00, 0x79, 0xc7, 0xfa, 0x01, 0x7c, 0x17, 0xf4, 
  0x18, 0x00, 0x90, 0x3d, 0x1d, 0x18, 0x1f, 0xf2, 0x10, 0x00, 0x90, 0x1d, 0x22, 0x78, 0xcf, 0xf7, 
  0x8d, 0x7b, 0xe3, 0x58, 0x8d, 0x7b, 0xeb, 0xa8, 0x0c, 0x00, 0x90, 0xfd, 0x22, 0x78, 0xcf, 0xf7, 
  0x8d, 0x7b, 0xe3, 0xa8, 0x8d, 0x7b, 0xeb, 0x58, 0xbe, 0x7b, 0xdb, 0xf8, 0xbc, 0x7b, 0xd3, 0xf8, 
  0x8c, 0x7b, 0xcb, 0xf8, 0x5f, 0x13, 0x80, 0xfe, 0x5b, 0x13, 0xa0, 0xfe, 0xf7, 0xfd, 0x02, 0xfb, 
  0x02, 0xfc, 0x66, 0xf0, 0x7e, 0xed, 0x03, 0xf1, 0xf6, 0x7b, 0x63, 0xfc, 0x02, 0xfc, 0x46, 0xf0, 
  0x0f, 0xfc, 0x06, 0xf7, 0xf7, 0xfd, 0x62, 0x0c, 0xb3, 0x53, 0x03, 0xf6, 0xa9, 0x11, 0xc0, 0xfe, 
  0x61, 0xfd, 0xc6, 0xfa, 0x61, 0x1d, 0xc7, 0xfa, 0x7e, 0x1d, 0x2b, 0xf9, 0xf8, 0x1b, 0x03, 0xf6, 
  0xba, 0x02, 0xa0, 0xfd, 0xd2, 0x54, 0x0f, 0xf2, 0x24, 0x00, 0x90, 0xad, 0x5a, 0x54, 0x0f, 0xf2, 
  0x04, 0x00, 0x90, 0xad, 0x5c, 0x01, 0x80, 0xfd, 0x01, 0x6a, 0x07, 0xf1, 0x00, 0x00, 0x00, 0xff, 
  0x3e, 0x6a, 0x1f, 0xf2, 0x5f, 0x28, 0x64, 0x3d, 0x00, 0x6a, 0x07, 0x36, 0x2d, 0x00, 0x64, 0xfd, 
  0x00, 0x1c, 0x0f, 0xf2, 0xe0, 0xff, 0x9f, 0xad, 0x00, 0x6a, 0x07, 0xf6, 0x5f, 0x28, 0x64, 0xfd, 
  0xaa, 0x11, 0xc0, 0xfe, 0x00, 0x19, 0xc7, 0xfa, 0xc3, 0x18, 0x0f, 0xf2, 0x4b, 0x18, 0x07, 0xa6, 
  0xc3, 0x18, 0x07, 0x56, 0x00, 0x19, 0x47, 0xfc, 0xab, 0x11, 0xc0, 0xfe, 0x61, 0x11, 0xc7, 0xfa, 
  0x61, 0xfd, 0xc6, 0xfa, 0x7e, 0x11, 0xcb, 0xf8, 0x61, 0xfd, 0xc6, 0xfa, 0x7e, 0x11, 0xd3, 0xf8, 
  0x7d, 0x11, 0x63, 0xfc, 0x18, 0x10, 0x1c, 0x0c, 0x80, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x80, 0x06, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x21, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0x30, 0x2e, 
  0x30, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0x01, 0x00, 0x02, 0x00, 0x03, 0x00, 0x61, 0x41, 0x62, 0x42, 0x63, 0x43, 0x64, 0x44, 0x65, 
  0x45, 0x66, 0x46, 0x67, 0x47, 0x68, 0x48, 0x69, 0x49, 0x6a, 0x4a, 0x6b, 0x4b, 0x6c, 0x4c, 0x6d, 
  0x4d, 0x6e, 0x4e, 0x6f, 0x4f, 0x70, 0x50, 0x71, 0x51, 0x72, 0x52, 0x73, 0x53, 0x74, 0x54, 0x75, 
  0x55, 0x76, 0x56, 0x77, 0x57, 0x78, 0x58, 0x79, 0x59, 0x7a, 0x5a, 0x31, 0x21, 0x32, 0x40, 0x33, 
  0x23, 0x34, 0x24, 0x35, 0x25, 0x36, 0x5e, 0x37, 0x26, 0x38, 0x2a, 0x39, 0x28, 0x30, 0x29, 0x0d, 
  0x0d, 0x1b, 0x1b, 0x08, 0x08, 0x09, 0x09, 0x20, 0x20, 0x2d, 0x5f, 0x3d, 0x2b, 0x5b, 0x7b, 0x5d, 
  0x7d, 0x5c, 0x7c, 0x23, 0x7e, 0x3b, 0x3a, 0x27, 0x22, 0x60, 0x7e, 0x2c, 0x3c, 0x2e, 0x3e, 0x2f, 
  0x3f, 0x39, 0x39, 0x3a, 0x3a, 0x3b, 0x3b, 0x3c, 0x3c, 0x3d, 0x3d, 0x3e, 0x3e, 0x3f, 0x3f, 0x40, 
  0x40, 0x41, 0x41, 0x42, 0x42, 0x43, 0x43, 0x44, 0x44, 0x45, 0x45, 0x46, 0x46, 0x47, 0x47, 0x48, 
  0x48, 0x49, 0x49, 0x4a, 0x4a, 0x4b, 0x4b, 0x7f, 0x08, 0x4d, 0x4d, 0x4e, 0x4e, 0x4f, 0x4f, 0x50, 
  0x50, 0x51, 0x51, 0x52, 0x52, 0x53, 0x53, 0x2f, 0x2f, 0x2a, 0x2a, 0x2d, 0x2d, 0x2b, 0x2b, 0x0d, 
  0x0d, 0x31, 0x31, 0x32, 0x32, 0x33, 0x33, 0x34, 0x50, 0x35, 0x35, 0x36, 0x36, 0x37, 0x37, 0x38, 
  0x38, 0x39, 0x39, 0x30, 0x30, 0x2e, 0x7f, 0x7c, 0x5c, 0x65, 0x65, 
};
// Parameter block end
//
void OneCogKbM_start(OneCogKbM *self, int32_t status)
{
  self->usbcog = cognew((int32_t)(((int32_t *)&dat[0])), (int32_t)(&self->itemaddr)) + 1;
  if (self->usbcog) {
    // DIR bit low puts smart pin in reset mode
    OneCogKbM_mydirl_(ONECOGKBM_USB_EVENT_REPO);
    // Set "long repository" mode to act as an event mailbox
    OneCogKbM_mywrpin_(ONECOGKBM_SP_REPO1_MODE, ONECOGKBM_USB_EVENT_REPO);
    // Enable the event mailbox smart pin (will raise IN)
    OneCogKbM_mydirh_(ONECOGKBM_USB_EVENT_REPO);
    // Pack the USB port data into a single long
    ((char *)status)[0] = self->usbcog;
    // Long repository smart pin to poll for event notifications
    ((char *)status)[1] = ONECOGKBM_USB_EVENT_REPO;
  }
}

//    byte[status][2] := 0                                ' Client must set <> 0 at kbd "ready" event, zero at disconnect event
//    byte[status][3] := 0                                ' Client must set <> 0 at mouse "ready" event, zero at disconnect event
static void OneCogKbM_mydirl_(int32_t pin)
{
 dirl_(pin); 
}

static void OneCogKbM_mydirh_(int32_t pin)
{
 dirh_(pin); 
}

static void OneCogKbM_mywrpin_(int32_t mode, int32_t pin)
{
 pinwr(pin, mode); 
}

int32_t OneCogKbM_mouse(OneCogKbM *self)
{
  int32_t data = 0;
  data = self->datavals[0];
  return data;
}

/* 
  if mouse_tail <> mouse_head
    data := mouse_buffer[mouse_tail]
    mouse_tail := ++mouse_tail & MOUSE_BUFFMASK
'    drvnot_(LED56)
 */
int32_t OneCogKbM_key(void)
{
  int32_t data = 0;
  if (((int32_t *)&dat[4951])[0] != ((int32_t *)&dat[4955])[0]) {
    data = ((int32_t *)&dat[4959])[((int32_t *)&dat[4951])[0]];
    *(int32_t *)(&dat[4951]) += 1;
    ((int32_t *)&dat[4951])[0] = (((int32_t *)&dat[4951])[0]) & ONECOGKBM_KBD_BUFFMASK;
  }
  return data;
}

int32_t OneCogKbM_geterrorcode(void)
{
  // Hub long with the error value
  return ((int32_t)(((int32_t *)&dat[4947])));
}

int32_t OneCogKbM_getversion(void)
{
  // ASCIIZ version string pointer
  return ((int32_t)(((char *)&dat[4941])));
}

Tuple2__ OneCogKbM_getdebuginfo(OneCogKbM *self)
{
  return ((Tuple2__){self->itemaddr, self->datavals[0]});
}

// ------------------------------------------------------------------------------
// #endregion Descriptors required by this device class
// #endregion Con (USB Descriptor Definitions)
/*  MIT License
+----------------------------------------------------------------------------------------------------------------------+
|                                             TERMS OF USE: MIT License                                                |
+----------------------------------------------------------------------------------------------------------------------+
|Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated          |
|documentation files (the "Software"), to deal in the Software without restriction, including without limitation the   |
|rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit|
|persons to whom the Software is furnished to do so, subject to the following conditions:                              |
|                                                                                                                      |
|The above copyright notice and this permission notice shall be included in all copies or substantial portions of the  |
|Software.                                                                                                             |
|                                                                                                                      |
|THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE  |
|WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR |
|COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR      |
|OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.      |
+----------------------------------------------------------------------------------------------------------------------+
 */
