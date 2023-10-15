#include "main.h"

/**
 * _printf - omar and pelly function to produce output
 *
 * @format: argument
 *
 * Return: characters printed
 */

int _printf(const char *format, ...)
{
	int c = 0;
	va_list omar;

	if (format == NULL)
		return(-1);

	va_start(omar, format);

	while(*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
		}

		format++;
	}
	return (c);
}
