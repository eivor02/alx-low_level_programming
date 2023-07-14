/*
 * File: 5-print_numbers.c
 * Auth: Saif Eddine Belhaj
 */

#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base 10, starting from 0.
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
