#include "main.h"

/**
 * _islower - to check for lowercase character
 * @c: is the character to be check
 * Return: 1 if c is lowercase, otherwise 0.
 *
*/

int _islower(int c)
{
	if (c >= 'a' && c <='z')
		return (1);
	else
		return (0);
}
