#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print all letters but the letter 'q' and 'e'.
 * Return: 0
 */

int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
if (letter == 'e' || letter == 'q')
letter++;
}
putchar('\n');
return (0);
}

