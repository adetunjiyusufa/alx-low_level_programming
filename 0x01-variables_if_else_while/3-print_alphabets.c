#include <stdio.h>
/**
 * main - to prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0
 *
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
			purchar(letter);

		purchar('\n');

	return (0);
}
