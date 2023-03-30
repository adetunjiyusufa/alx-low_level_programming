#include "main.h"

/**
 *_strncpy - to copies a string
 *
 * @src: is  source of strings
 * @dest: is the destination of the string
 * @n: is the length of int
 *
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);
}
