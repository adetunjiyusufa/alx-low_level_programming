#include "main.h"

/**
 * swap_int - to swaps the values of two integers
 * @a: is the first integer
 * @b: is the second integer
 * Return: 0
 */

void swap_int(int *a, int *b);
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
