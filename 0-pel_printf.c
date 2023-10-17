#include "main.h"

/**
 * _printf - name of custom function
 * @format: string containing format specifiers
 * Return: number of charaters printed
 */


int _printf(const char *format, ...)
{
	pel_struct arr[] = {
		{"%s", pel_str}, {"%u", pel_unsigned}, 
		{"%c", pel_char}, {"%o", pel_octal},
		{"%i", fire_int}, {"%d", lava_int},
		{"%%", pel_modular}, {"%b", pel_bin},
		{"%x", pel_hexagon}, {"%X", pel_HEXAGON},
		{"%S", pel_exstring} 
	};

	va_list pel_args;
	int i = 0, j, len = 0;

	va_start(pel_args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 10;
		while (j >= 0)
		{
			if (arr[j].pel[0] == format[i] && arr[j].pel[1] == format[i + 1])
			{
				len += arr[j].grass(pel_args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(pel_args);
	return (len);
}
