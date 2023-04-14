#include "main.h"

/**
 * malloc_checked - to allocates memory using malloc
 *
 * @b: the memory allocated
 *
 * Return: a pointer to the allocated memory
 *
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
	_putchar('\n');
}
