#include "main.h"

/**
 * pel_char - function to print character
 * @pel: variable character
 *
 * Return: 1, sucess
 */

int pel_char(va_list pel)
{
	char p;

	p = va_arg(pel, int);
	_putchar(p);
	return (1);
}
