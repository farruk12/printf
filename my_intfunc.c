#include "main.h"
/**
 * lava_int - custom function
 * @pel: argument world
 * Return: char, success.
 *
 */

int lava_int(va_list pel)
{
	int new = va_arg(pel, int);
	int myNum, lastOne = new % 10, digit, exp = 1;
	int i = 1;

	new = new / 10;
	myNum = new;

	if (lastOne < 0)
	{
		_putchar('-');
		myNum = -myNum;
		new = -new;
		lastOne = -lastOne;
		i++;
	}
	if (myNum > 0)
	{
		while (myNum / 10 != 0)
		{
			exp = exp * 10;
			myNum = myNum / 10;
		}
		myNum = new;
		while (exp > 0)
		{
			digit = myNum / exp;
			_putchar(digit + '0');
			myNum = myNum - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(lastOne + '0');
	return (i);
}

/**
 * fire_int - custome integer function
 * @pel: argument two
 * Return: always success
 */

int fire_int(va_list pel)
{
	int new = va_arg(pel, int);
	int myNum, lastOne = new % 10, digit, exp = 1;
	int i = 1;

	new = new / 10;
	myNum = new;

	if (lastOne < 0)
	{
		_putchar('-');
		myNum = -myNum;
		new = -new;
		lastOne = -lastOne;
		i++;
	}
	if (myNum > 0)
	{
		while (myNum / 10 != 0)
		{
			exp = exp * 10;
			myNum = myNum / 10;
		}
		myNum = new;
		while (exp > 0)
		{
			digit = myNum / exp;
			_putchar(digit + '0');
			myNum = myNum - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(lastOne + '0');
	return (i);
}
