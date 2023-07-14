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

#include <stdio.h>
/**
 * main - print numbers from 00 to 99.
(*
 * Return: 0 on success
 */
int main(void)
{
	int s = '0';
	int b = '0';
	int m = '0';

	while (s <= '7')
	{
		while (b <= '8')
		{
			while (m <= '9')
			{
				if (s < b && b < m)
				{
					putchar(i);
					putchar(b);
					putchar(m);
					if (!(s == '7' && b == '8' && m == '9'))
					{
						putchar(',');
						putchar(' ');
					}

				}
				m++;
			}
			m = '0';
			b++;
		}
		b = '0';
		s++;
	}
	putchar('\n');
	return (0);
}



