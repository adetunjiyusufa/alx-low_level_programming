#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: is the number of the last digit
 * Return: the value of the last digit
 *
*/

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');
i
	return (last_digit);
}
