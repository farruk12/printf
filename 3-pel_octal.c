#include "main.h"

/**
 * pe_octal - function
 * @pel: my octal function
 * Return: always success
 */
int pel_octal(va_list pel)
{
	int i, increment = 0;
	int *arr;
	unsigned int myNum = va_arg(pel, unsigned int);
	unsigned int sem = myNum;

	while (myNum / 16 != 0)
	{
		myNum = myNum / 16;
		increment++;
	}
	increment++;
	arr = malloc(sizeof(int) *increment);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < increment; i++)
	{
		arr[i] = sem % 16;
		sem = sem / 16;
	}
	for (i = increment - 1; i >= 0; i--)
		_putchar(arr[i] + '0');
	free(arr);
	
	return (increment);
}
