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
alpha++;
if (letter == 'e' || letter == 'q')
alpha++;
}
putchar('\n');
return (0);
}

