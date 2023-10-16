#include "main.h"

/**
 * pel_strlens - function to find length of string
 * @pel: pointer
 * Return: i
 */


int pel_strlens(char *pel)
{
	int i;

	i = 0;

	while (pel[i] != '\0')
		i++;
	return (i);

}

/**
 * pel_strlenc - function to print character
 * @pel: character
 * Return: pointer to character
 */

int pel_strlenc(const char *pel)
{
	int i;

	i = 0;
	while (pel[i] != '\0')
		i++;
	return (i);
}
