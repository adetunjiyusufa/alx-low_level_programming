#include <stdio.h>
/**
 * main - to prints all possible combinations of two two-digit numbers
 * from 0 to 99
 * and to use only putchar function
 *
 * Return: 0
 *
*/
int main(void)
{
int num1, num2;

		for (num1 = 0; num1 < 100; num1++)
		{
			for (num2 = 0; num2 < 100; num2++)
			{
				if (num1 < num2)
				{
					putchar((num1 / 10) + '48');
					putchar((num1 % 10) + '48');
					putchar(' ');
					putchar((num2 / 10) + '48');
					putchar((num2 % 10) + '48');
					if (num1 != 98 || num2 != 99)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		putchar('\n');

		return (0);
}
