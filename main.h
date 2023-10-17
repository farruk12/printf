#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

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
#endif
