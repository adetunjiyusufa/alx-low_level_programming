#iclude "main.h"

/**
 * _puts_recursion - to  prints a string
 *
 * @s: The string
 *
 * Return:void
 *
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
