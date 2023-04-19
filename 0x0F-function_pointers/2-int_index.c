#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 *
 * @array: the pointer to the function
 * @size: is the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Return: 0 if false, something else otherwise.
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (x < size)
			{
				if (cmp(array[x]))
					return (x);
				x++;
			}
		}
	}
	return (-1);
}
