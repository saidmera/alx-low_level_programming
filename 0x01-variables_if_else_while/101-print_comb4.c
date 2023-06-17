/*
 * File: 101-print_comb4.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit1 = 0;
	int digit2 = 1;
	int digit3 = 2;

	while (digit1 < 8)
	{
		while (digit2 < 9)
		{
			while (digit3 < 10)
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');

				if (digit1 == 7 && digit2 == 8 && digit3 == 9)
					continue;
				
				putchar(',');
				putchar(' ');

				digit3++;
			}

			digit2++;
			digit3 = digit2 + 1;
		}

		digit1++;
		digit2 = digit1 + 1;
		digit3 = digit2 + 1;
	}

	putchar('\n');

	return (0);
}
