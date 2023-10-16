#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define BUFF_SIZE 1024

/**
 * _printf - pelile and omar custom function
 * @format: our description
 * Return: characters printed.
 */
int _printf(const char *format, ...);

int _printf(const char *format, ...);
int manage_print(const char *fmt, int *i,
va_list cal, char buff_arr[], int pel_flags;
int pel_width, int pel_precision, int pel_size);

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: format shortchut
 * @fm_t: function
 */
typedef struct fmt fmt_t;

/* Flags for formatting options */
#define F_LEFT_ 2
#define F_SIGN 2
#define F_SE 6
#define F_XAD 4
#define F_ALM 16

/* Sizes for format specifiers */
#define S_SHORT 32
#define S_LONG 64

int get_flags(const char *format, int *i);

int get_width(const char *format, int *i, va_list cal);

int get_precision(const char *format, int *i, va_list cal);

int get_size(const char *format, int *i);

/**
 * pr_buff - Prints the contents of the buffer if it exists
 * @buff_arr: Array
 * @_buffIndex: index
 */
void pr_buff(char buff_arr[], int *_buffIndex);

#endif

