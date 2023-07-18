/*
 * File: 4-isalpha.c
 * Auth: Saif Eddine belhaj
 *
 */

#include "main.h"

/**
 * _isalpha Checks for alphabetic character
 * @c: is the character to be checked.
 *
 * Return: 1 if c is letter, lowercase or uppercase
 * and 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);}
