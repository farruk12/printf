#include "main.h"

/**
 * pel_reverse - function to reverse string
 * @pel: description
 *
 * Return: string
 */

int pel_reverse(va_list pel)
{
	char *x = va_arg(pel, char *);
	int i;
	int j = 0;

	if (x == NULL)
		x = "(null)";
	while (x[j] != '0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(x[i]);
	return (j);
}
