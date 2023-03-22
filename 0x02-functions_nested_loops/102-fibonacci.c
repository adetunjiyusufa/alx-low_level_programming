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
	unsigned long fnum1 = 1, fnum2 = 2, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fnum1 + fnum2;
		printf("%lu", sum);

			fnum1 = fnum2;
			fnum2 = sum;

			if (count == 49)
				printf("\n");
			else
				printf(", ");
	}
	return (0);
}
