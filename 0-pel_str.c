#include "main.h"

/**
 * pel_str - strings string
 * @pel: argument
 * Return: len, sucess
 *
 */

int pel_str(va_list pel)
{
	char *om;
	int i;
	int len;

	om = va_arg(pel, char *);
	if (om == NULL)
	{
		om = "(null)";
		len = pel_strlens(om);
		for (i = 0; i < len; i++)
			_putchar(om[i]);
		return (len);
	}
	else
	{
		len = pel_strlens(om);
		for (i = 0; i < len; i++)
			_putchar(om[i]);
		return (len);
	}
}
