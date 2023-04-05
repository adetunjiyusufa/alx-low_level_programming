#include "main.h"

/**
 * _strlen_recursion - to returns the length of a string.
 *
 * @s: the string
 *
 * Return: length of a string
 *
 */

int _strlen_recursion(char *s)
{
	int k = 0;

	if (*s)
	{
		k++;
		k += _strlen_recursion(s + 1);
	}
	return (k);
}
