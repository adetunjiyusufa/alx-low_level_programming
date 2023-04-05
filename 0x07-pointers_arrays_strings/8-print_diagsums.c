#include "main.h"

/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 *
 * @a: pointer to the matrix
 * @size: The width of the matrix
 *
 * Return: void
 *
 */

void print_diagsums(int *a, int size)
{
	int i, j, k, d = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		k = (i * size) + i;
		d += *(a + k);
	}

	for (j = 0; j < size; j++)
	{
		k = (j * size) + (size - 1 - j);
		d2 += *(a + k);
	}
	printf("%i, %i\n", d, d2);
}
