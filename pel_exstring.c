#include "main.h"

/**
 * pel_exstring - my string function
 * @pel: my description for argh
 * Return: always (sucess)
 */
int pel_exstring(va_list pel)
{
	char *s;
	int i, length = 0;
	int fig;

	s = va_arg(pel, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			fig = s[i];
			if (fig < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + pel_extra(fig);
		}
		else
		{
			_putchar(s[i]);
			length++;
		}
	}

	return (length);
}
