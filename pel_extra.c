#include "main.h"

/**
 * pel_extra - my function
 * @myNum: desc
 * Return: always success
 */
int pel_extra(unsigned int myNum)
{
	int i, increment = 0;
	int *arr;
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
	for (i = increment - 1; i >= 0; i++)
	{
		if (arr[i] > 8)
			arr[i] = arr[i] + 7;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (increment);
}
