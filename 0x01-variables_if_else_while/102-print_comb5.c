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
int x, y;

		for (x = 0; x < 100; x++)
		{
			for (y = 0; y < 100; y++)
			{
				if (x < y)
				{
					putchar((x / 10) + '48');
					putchar((x % 10) + '48');
					putchar(' ');
					putchar((y / 10) + '48');
					putchar((y % 10) + '48');
					if (x != 98 || y != 99)
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
