#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations fo single-digit numbers.
 * Numbers must be separated by commas and a space.
 * You can only use `putchar` to print to console
 * You can only use `putchar` up to four times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
	int s = 0;

	while (s < 10)
	{
		putchar(s + '0');
		if (s < 9)
		{
			putchar(44);
			putchar(32);
		}
		s++;
	}
	putchar('\n');

	return (0);
}
