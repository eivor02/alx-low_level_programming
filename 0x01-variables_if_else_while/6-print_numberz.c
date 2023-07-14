/*
 * File: 6-print_numberz.c
 * Auth: Saif Eddine Belhaj
 */

#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base 10, starting from 0.
 * You are not allowed to use any variable of type char.
 * You can only use `putchar` to print to console.
 * You can only use `putchar` twice.
 * Return: 0
 */

int main(void)
{
	int s;

	for (s = 0; s < 10; s++)
	{
		putchar(s + '0');
	}
	putchar('\n');

	return (0);
}

