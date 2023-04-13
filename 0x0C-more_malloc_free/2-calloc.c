#include "main.h"

/**
 * _calloc - to allocates memory for an array, using malloc.
 *
 * @size: the allocate element of size bytes
 * @nmemb: allocate memory for an array
 *
 * Return: the pointer to the allocated memory
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int y;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(nmemb * size);
	if (x == NULL)
	return (NULL);

	for (y = 0; y < (nmemb * size); y++)
		x[y] = 0;

	return (x);
}


