#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: The first occurrence in the string
 * @accept: any of the bytes in the string
 *
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}

		return (NULL);
}
