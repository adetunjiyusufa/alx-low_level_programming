#include <stdio.h>
/**
 * main - to prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: 0
*/
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar (alphabet);

	_putchar ('\n');

	return (0);
}