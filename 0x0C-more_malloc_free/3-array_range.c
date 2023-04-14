#include "main.h"
#include <stdlib.h>

/**
 * *array_range - to creates an array of integers.
 *
 * @min: the minimum range of value
 * @max: the maximum range of value
 *
 * Return: the pointer to the newly created array
 *
 */

int *array_range(int min, int max)
{
	int *ptr;
	int x, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		ptr[x] = min++;

	return (ptr);
}
