#include "main.h"
#include <stdlib.h>

/**
 * create_array - to creates an array of chars,
 *		and initializes it with a specific char.
 *
 * @size: the size of the array
 * @c: initializes value
 *
 * Return: a pointer to the array, or NULL if it fails
 *
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int k;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
		array[k] = c;

	return (array);
}
