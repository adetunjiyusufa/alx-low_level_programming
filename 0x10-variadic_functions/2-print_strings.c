#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 *
 * @separator: is the string to be printed between the strings
 * @n:  is the number of strings passed to the function
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *str;
	unsigned int x;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (x = 0; x < n; x++)
	{
		str = va_arg(ap, char*);

		if (str == NULL)
			str = "(nil)";
		printf("%s", str);

		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
