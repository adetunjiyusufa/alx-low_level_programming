#include "main.h"

/**
 * print_rev - to prints a string, in reverse, followed by a new line.
 * @s: is the string to be print in reverse
 * Return: the length of the string
 */

void print_rev(char *s)
{
	int i, j;

	j = 0;
	while (s[j] != '\0')
		j++;

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
