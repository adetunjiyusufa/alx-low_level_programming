#include "main.h"

/**
 * print_alphabet_x10 - to  prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 *
*/
void print_alphabet_x10(void)
{
	int count = 0;
	char alphabet;

	while (count++ <= 9)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);

		_putchar('\n');
	}
}
