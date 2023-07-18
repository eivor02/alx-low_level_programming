/*
 * File: 0-putchar.c
 * Auth: Saif Eddine belhaj
 *
 */

#include "main.h"

/**
 * _islower - Check Main
 * @c: letter being checked
 * Return: 1 for lowercase character or 0 for anything else
 */

int _islower(int c)
	{
	char b;
	int lower = 0;

	for (b = 'a'; b <= 'z'; b++)
	{
		if (b == c)
			lower = 1;
	}

	return (lower);
}

