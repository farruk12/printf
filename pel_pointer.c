#include "main.h"

/**
 * pel_pointer - function for printf
 * @pel: description
 * Return: success
 */

int pel_pointer(va_list pel)
{
	int i, w;
	void *b;
	char *s = "(nil)";
	long int y;

	b = va_arg(pel, void *);
	if (b == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (i);
	}

	y = (unsigned long int)b;
	_putchar('\0');
	_putchar('x');
	w = pel_ex(y);
	return (w + 2);
}
