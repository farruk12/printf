#include "main.h"

/**
 * pel_bin - my binary function
 * @pel: my description for va arg
 * Return: always success
 */

int pel_bin(va_list pel)
{
	int F = 0;
	int C = 0;
	int i, a = 1, b;

	unsigned int myNum = va_arg(pel, unsigned int);
	unsigned int V;

	for (i = 0; i < 32; i++)
	{
		V = ((a << (32 - i)) & myNum);
		if (V >> (31 - i))
			F = 1;
		if (F)
		{
			b = V >> (31 - i);
			_putchar(b + 48);
			C++;
		}
	}
	if (C == 0)
	{
		C++;
		_putchar('0');
	}
	return (C);
}
