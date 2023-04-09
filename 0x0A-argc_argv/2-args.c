#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 *
 * @argc: argument count
 * @argv: arguements vector
 *
 * Return: 0
 *
 */

int main(int argc, char **argv)
{
	int k;

	for (k = 0; k < argc; k++)

		printf("%s\n", argv[k]);
}
