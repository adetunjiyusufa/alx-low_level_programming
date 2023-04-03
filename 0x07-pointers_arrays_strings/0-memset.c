#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @n: bytes of the memory area pointed to by s
 * @s: the constant byte b
 * @b: the memory area pointed
 *
 * Return: a pointer to the memory area s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}
	_putchar('\n');
	return (s);
}
