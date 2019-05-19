#include <unistd.h>
#include "py/mpconfig.h"
#include "vgatext.h"

#define VGA_BASEPIN 48

/*
 * Core UART functions to implement for a port
 */

extern int _getbyte();
extern int _putbyte(int c);
extern unsigned int _getcnt();
extern void _waitcnt(unsigned int n);

vgatext vga;

void mp_hal_io_init(void) {
    vgatext_start(&vga, VGA_BASEPIN);
}

// Receive single character
int mp_hal_stdin_rx_chr(void) {
    unsigned char c;
    int32_t flip = 0;
    
#if MICROPY_MIN_USE_STDOUT
    int r = read(0, &c, 1);
    (void)r;
#else
    int ci;
    do {
        ci = _getbyte();
        if (ci < 0 && !flip) {
            vgatext_invertcurchar(&vga);
            flip = 1;
        }
    } while (ci < 0);
    if (flip) {
        vgatext_invertcurchar(&vga);
    }
    c = ci;
#endif
    return c;
}

void _pausems(unsigned numms)
{
    unsigned cycle = _getcnt() + numms * 160000;
    _waitcnt(cycle);
}

// Send string of given length
void mp_hal_stdout_tx_strn(const char *str, mp_uint_t len) {
#if MICROPY_MIN_USE_STDOUT
    int r = write(1, str, len);
    (void)r;
#else
    unsigned int c;
    unsigned maxlen = len;
//    if (maxlen > 256) maxlen = 256;
    while (maxlen--) {
        c = (*str++) & 0xff;
        _putbyte(c);
        vgatext_tx(&vga, c);
    }
//    _pausems(500);
#endif
}
