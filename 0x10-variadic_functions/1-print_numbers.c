#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 *
 * @separator: is the string to be printed between numbers
 * @n:  is the number of integers passed to the function
 *
 * Return: 0
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(ap, int));
		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
