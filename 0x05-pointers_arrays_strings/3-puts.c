#include "main.h"

/**
 * _puts - to  prints a string, followed by a new line, to stdout.
 * @str: is the string
 * Return: the length of the string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	_putchar('t');
	_putchar('o');
	_putchar(' ');
	_putchar('s');
	_putchar('t');
	_putchar('d');
	_putchar('0');
	_putchar('u');
	_putchar('t');
}
