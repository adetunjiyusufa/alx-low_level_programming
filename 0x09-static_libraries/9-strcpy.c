#include "main.h"
/**
 * _strcpy - to Write a function that copies the string pointed to by src,
 *		terminating null byte (\0), to the buffer pointed to by dest
 *
 * @dest: char to check
 * @src: char to check
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

