#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
    int i;

    for (i = 'a'; i <= 'z'; i++) {
        putchar(i);
    }

    putchar('\n');

    return 0;
}
