#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base64 in lowercase.
 * You can only use `putchar`, and only 3 times.
 * Return: 0
 */
int main(void)
{
	char b;
	int s;

	for (s = 0; s < 10; s++)
	{
		putchar(s + '0');
	}
	for (b = 'a'; b < 'g'; b++)
	{
		putchar(b);
	}
	putchar('\n');

	return (0);
}

