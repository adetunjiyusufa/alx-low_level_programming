#include "main.h"

/**
 * puts2 - to t prints every other character of a string,
 *		starting with the first character,
 *		followed by a new line.
 * @str: is the char to check
 * Return: 0
 */

void puts2(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	if (s % 2 == 0)
		_putchar(str[s]);
	_putchar('\n');
}
