#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 * Auth: Saif Eddine Belhaj
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}

