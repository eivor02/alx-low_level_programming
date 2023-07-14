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
	int s, b, r;

	s = 0;

	while (s < 100)
	{
		b = s % 10; /* singles digit */
		r = s / 10; /* doubles digit */

		if (r < b)
		{
			putchar(r + '0');
			putchar(b + '0');

			if (s < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		s++;
	}
	putchar('\n');

	return (0);
}



