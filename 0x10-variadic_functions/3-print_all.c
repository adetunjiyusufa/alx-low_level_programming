#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 *
 * @format: is a list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list a_list;
	char *str;
	int x;
	int flag;

	va_start(a_list, format);
	x = 0;
	while (format != NULL && format[x] != '\n')
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(a_list, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(a_list, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(alist, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(a_list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[x + 1] != '\n' && flag == 0)
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(a_list);
}
