#include "function_pointers.h"

/**
 * print_name - to  prints a name
 *
 * @name: name of the person
 * @f: the function of name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
