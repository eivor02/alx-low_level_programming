/*
 * File: 2-largest_number.c
 * Auth: Saif Eddine belhaj
 *
 */

#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @s: first integer
 * @b: second integer
 * @m: third integer
 * Return: largest number
 */

int largest_number(int s, int b, int m)
{
	int largest;

	if (s > b && s > m)
	{
	largest = s;
	}
	else if (b > m)
	{
	largest = b;
	}
	else
	{
	largest = m;
	}

	return (largest);
}

