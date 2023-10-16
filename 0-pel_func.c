#include "main.h"

void pr_buff(char buff_arr[], int *_buffIndex);

/**
 * _printf - pelile and omar custom function
 * @format: our description
 *
 * Return: result of printed characters.
 */

int _printf(const char *format, ...)
{
	void pr_buff(char buff_arr[], int *_buffIndex);
	int i, ans = 0, result_chars = 0;
	int pel_flags, pel_width, pel_precision, pel_size, _buffIndex = 0;
	va_list cal;
	char buff_arr[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(cal, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buff_arr[_buffIndex++] = format[i];
			if (_buffIndex == BUFF_SIZE)
				pr_buff(buff_arr, _buffIndex);
			chars_result++;
		}
		else
		{
			pr_buff(buff_arr, &_buffIndex);
			pel_flags = get_flags(format, &i);
			pel_width = get_width(format, &i, cal);
			pel_precision = get_precision(format, &i, cal);
			pel_size = get_size(format, &i);
			++i;
			ans = manage_print(format, &i, list, buff_arr,
				pel_flags, pel_width, pel_precision, pel_size);
			if (ans == -1)
				return (-1);
			chars_result += ans;
		}
	}

	pr_buff(buff_arr, &_buffIndex);

	va_end(cal);

	return (printed_chars);
}

/**
 * pr_buff - buffer contents
 * @buff_arr: Array
 * @_buffIndex: index
 */
void pr_buff(char buff_arr[], int *_buffIndex);
{
	if (*_buffIndex > 0)
		write(1, &buff_arr[0], *_buffIndex);

	*_buffIndex = 0;
}
