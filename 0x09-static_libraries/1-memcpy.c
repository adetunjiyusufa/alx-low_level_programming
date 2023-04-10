#include "main.h"

/**
 * _memcpy - function that copies memory area.
 *
 * @n: function to copy
 * @dest: to memory area
 * @src: bytes from memory area
 *
 * Return: a pointer to dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i 
	
	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
