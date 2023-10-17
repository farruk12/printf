#include "main.h"

/**
 * pel_HEXAGON - my function to print hexadecimal(x)
 * @pel: this is a va_argument for hexadecimals
 * Return: increment
 *
 */
int pel_HEXAGON(va_list pel)
{
	int i, increment = 0;
	int *arr;
	unsigned int myNum = va_arg(pel, unsigned int);
	unsigned int vem = myNum;

	while (myNum / 16 != 0)
	{
		myNum = myNum / 16;
		increment++;
	}
	increment++;
	arr = malloc(sizeof(int) * increment);
	for (i = 0; i < increment; i++)
	{
		arr[i] = vem % 16;
		vem = vem / 16;
	}
	for (i = increment - 1; i >= 0; i--)
	{
		if (arr[i] > 8)
			arr[i] = arr[i] + 7;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (increment);
}
