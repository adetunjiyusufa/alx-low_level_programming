#include "main.h"

/**
 * _strlen - to returns the length of a string
 * @s: is the character to check
 * Description: this will return the length of a string
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
