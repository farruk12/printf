#include "main.h"

/**
 * pel_bin - my binary function
 * @pel: my description for va arg
 * Return: always success
 */

int pel_bin(va_list pel)
{
	unsigned int pel_num = va_arg(pel, unsigned int);
	unsigned int bin[32];
	int i = 0, pel_len = 0;
	char digchar;

	if (pel_num == 0)
	{
		write(1, "0", 1);
			return (1);
	}
	while (pel_num > 0)
	{
		bin[i] = pel_num % 2;
		pel_num = pel_num / 2;
		i++;
	}
	pel_len = i;
	for (i = pel_len - 1; i >= 0; i--)
	{
		digchar = bin[i] + '0';
		write(1, &digchar, 1);
	}

	return (pel_len);
}
