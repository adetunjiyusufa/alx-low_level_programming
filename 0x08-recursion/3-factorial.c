#include "main.h"

/**
 * factorial - the factorial of a number
 *
 * @n: the number to be factorise
 *
 * Return: int
 *
 */

int factorial(int n)
{
	int i;

	if (n == 0)
	{
		return (1);

	}
	else if (n < 0)
	{
		return (-1);
	}
	{
	i = n * factorial(n - 1;
	}
		return (i);
}
