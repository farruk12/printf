#include "main.h"
/**
 * pel_rot - convert to rot13
 * @args: arg
 * Return: counter
 *
 */
int pel_rot(va_list args)
{
	int i, j, increment = 0;
	int t = 0;
	char *v = va_arg(args, char*);
	char vu[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char zu[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (v == NULL)
		v = "(null)";
	for (i = 0; v[i]; i++)
	{
		t = 0;
		for (j = 0; vu[j] && !t; j++)
		{
			if (v[i] == vu[j])
			{
				_putchar(zu[j]);
				increment++;
				t = 1;
			}
		}
		if (!t)
		{
			_putchar(v[i]);
			increment++;
		}
	}
	return (increment);
}
