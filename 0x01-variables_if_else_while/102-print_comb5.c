/*
 * File: 102-print_comb5.c
 * Auth: Saif Eddine belhaj
 */

#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two digits.
 * Numbers must be separated by commas and a space.
 * 01 and 10 are considered as the same combination of the two digits.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * You can only use `putchar`.
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */


int main(void)
{
	int s, b;

	for (s = 0; s <= 98; s++)
	{
		for (b = s + 1; b <= 99; b++)
		{
			putchar((s / 10) + '0');
			putchar((s % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (s == 98 && b == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}



