#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct structure_form - structure
 * @pel: argument
 * @grass: function pointer
 */

typedef struct structure_form
{
        char *pel;
        int (*grass)();
} pel_struct;

int _putchar(char c);
int pel_str(va_list pel);
int pel_char(va_list pel);
int _printf(const char *format, ...);
int pel_modular(void);
int pel_strlenc(const char *pel);
int pel_strlens(char *pel);
int fire_int(va_list pel);
int lava_int(va_list pel);
int pel_bin(va_list pel);
int pel_octal(va_list pel);
int pel_unsigned(va_list pel);
int pel_hexagon(va_list pel);
int pel_HEXAGON(va_list pel);
int pel_extra(unsigned int myNum);
int pel_exstring(va_list pel);
int pel_pointer(va_list pel);
int pel_ex(unsigned long int myNum);
int pel_reverse(va_list pel);
int pel_rot(va_list args);
#endif
