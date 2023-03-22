#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *	followed by a new line.
 *
 * Return: 0
*/

int main(void)
{
	int j, sum = 0;

	for (j = 0; j < 1024; j++)
	{
		if ((j % 3) == 0 || (j % 5) == 0)
			sum += j;
	}
	printf("%d\n", sum);

	return (0);
}
