/*
 * File: 2-strlen.c
 * Auth: saif eddine Belhaj
 */


#include "main.h"

/**
 * _strlen - calculate the length of a string.
 *
 * @s: the string to calculate its length.
 * Return: length of a string.
 */

size_t _strlen(const char *s)
{
	size_t length = 0;

	while (*s++)
		length++;

	return (length);
}
