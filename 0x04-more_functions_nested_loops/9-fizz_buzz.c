/*
 * File: 9-fizz_buzz.c
 * Auth:  Saif Eddine belhaj
 */

#include "stdio.h"

/**
 * main - FizzBuzz
 *
 * Fizz for multiples of 3 and Buzz for multiples of 5 FizzBuzz for both
 *
 * Return: Always 0
 */

int main(void)
{
	int s;

	for (s = 1; s <= 100; s++)
	{
		if ((s % 3 == 0) && (s % 5 == 0))
			printf("FizzBuzz");
		else if (s % 3 == 0)
			printf("Fizz");
		else if (s % 5 == 0)
			printf("Buzz");
		else
			printf("%d", s);
		if (s < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

