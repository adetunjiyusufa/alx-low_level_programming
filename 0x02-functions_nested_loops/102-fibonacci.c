#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 *	followed by a new line
 *	The numbers must be separated by comma, followed by a space ,
 * Return: 0
 *
*/

int main(void)
{
	int count;
	unsigned long fnum1 = 1, fnum2 = 2, s;

	for (count = 0; count < 50; count++)
	{
		s = fnum1 + fnum2;
		putchar('s');

			fnum1 = fnum2;
			fnum2 = s;

			if (count == 49)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
	}
	return (0);
}
