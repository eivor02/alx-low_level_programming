/*
 * File: 7-print_last_digit.c
 * Auth: Saif Eddine belhaj
 *
 */

#include "main.h"
/**
 * print_last_digit - print the last digit of an integer
 * @s: An integer input
 *
 * Return: last digit of number s
 */

int print_last_digit(int s)
{
	int n;

	if (s < 0)
		n = -1 * (s % 10);
	else
		n = s % 10;
	_putchar((n % 10) + '0');
	return (n % 10);
}

