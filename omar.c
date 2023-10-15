#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * _printf - omar and pelly function to produce output
 *
 * @format: argument
 *
 * Return: characters printed
 */

int _printf(const char *format, ...)
{
	int no_char = 0;
	va_list omar;
	char *string;
	char pelly;

	va_start(omar, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			no_char++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			else if (*format == 'c')
			{
				pelly = va_arg(omar, int);
				write(1, &pelly, 1);
				no_char++;
			}
			else if (*format == 's')
			{
				string = va_arg(omar, char *);
				write(1, string, 1);
				no_char++;
			}
			else if (*format == '%')
			{
				write(1, "%", 1);
				no_char++;
			}
		}
	}
	va_end(omar);
	return (no_char);
}
