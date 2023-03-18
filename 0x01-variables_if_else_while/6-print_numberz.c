#include <stdio.h>
/**
 * main -print all single digit numbers of base 10 starting from 0 with putchar
 * char variable is not allowed
 *
 * Return: 0
 *
*/
int main(void)
{
int n;

	for (n = 0; n < 10; n++)

	{
		putchar((n%10) + '0');
	}

	putchar("\n");
	return (0);
}
