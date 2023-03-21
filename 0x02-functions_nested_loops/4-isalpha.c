#include "main.h"

/**
 * _isalpha - to checks for alphabetic character.
 * @c: is the character to be check
 * Return: 1 if c is a letter, lowercase or uppercase,  0 otherwise
 *
*/

int _isalpha(int c);
{
	if ((c >= 'a' && c <= 'z' || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
