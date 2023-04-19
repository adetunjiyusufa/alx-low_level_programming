#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - to executes a function given as a parameter on each element
 *			of an array.
 *
 * @array: the array to excute the function on.
 * @size: the size of the array.
 * @action: is a pointer to the function you need to use
 *
 * Return: void
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array && action)
	{
		x = 0;
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
