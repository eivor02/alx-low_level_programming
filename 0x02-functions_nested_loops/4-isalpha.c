/*
 * File: 4-isalpha.c
 * Auth: Saif Eddine belhaj
 *
 */

#include "main.h"

/**
 * _isalpha - checks if character is letter, lowercase or uppercase
 * @c: is the character to be checked.
 *
 * Return: 1 if c is letter, lowercase or uppercase
 * and 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
