#include "main.h"

/**
 * pel_octal - function to print octal
 * @pel: my arguments
 * Return: always (success)

 */
int pel_octal(va_list pel)
{
	int i, increment = 0;
	int *arr;

	unsigned int myNum = va_arg(pel, unsigned int);
	unsigned int vem = myNum;

	while (myNum / 8 != 0)
	{
		myNum = myNum / 8;
		increment++;
	}
	increment++;
	
	arr = malloc(sizeof(int) * increment);
	for (i = 0; i < increment; i++)
	{
		arr[i] = vem % 8;
		vem = vem / 8;
	}
	for (i = increment - 1; i >= 0; i--)
		_putchar(arr[i] + '0');
	free(arr);
	return (increment);
}

