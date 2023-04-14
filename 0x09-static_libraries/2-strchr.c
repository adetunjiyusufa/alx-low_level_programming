#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: in the string
 * @c: first occurrence of the character
 *
 * Return: a pointer to the first occurrence of the character c
 *
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}