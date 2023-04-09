#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all arguments it receives.
 *
 * @argc: argument count
 * @argv: arguments vector
 *
 * Return: 0
 *
 */

int main(int argc, char **argv)
{
	int i, j;

	if (argc < 3)
	{
		printf("error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("%d\n", i * j);

	return (0);
}
