#include "main.h"
#include <stdio.h>

/**
 * main - to Write a program that prints the number of arguments passed into it
 *
 * @argc: argument count
 * @argv: arguments vector
 *
 * Return: 0
 *
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
