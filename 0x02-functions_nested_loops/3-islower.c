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
	char S;
	int lower = 0;

	for (S = 'a'; S <= 'z'; S++)
	{
		if (S == c)
			lower = 1;
	}

	return (lower);
}

