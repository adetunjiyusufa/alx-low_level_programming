#include "main.h"

/**
 * _pow_recursion - to returns the value of x raised to the power of y
 *
 * @x:interger
 * @y:the power the interger is raised to
 *
 * Return: int
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (* _pow_recursion(x, y - 1));
	else
	{
		return (1);
	}
}
