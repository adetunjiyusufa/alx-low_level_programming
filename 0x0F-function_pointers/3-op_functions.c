#include "3-calc.h"

/**
 * op_add - to add two integer
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - to subtract integer
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - to multiply two integer
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - to divide integer
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: int
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - to find integer remainder
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: int
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
