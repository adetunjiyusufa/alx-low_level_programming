#include <stdio.h>
/**
 * main -to prints all possible combinations of single-digit numbers
 * and use the putchar function only
 *
 * Return: 0
 *
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
		if (n == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n')
	return (0);
}
