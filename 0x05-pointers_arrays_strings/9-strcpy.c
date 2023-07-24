/*
 * File: 9-strcpy.c
 * Auth: Saif eddine Belhaj
 */

#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, including the
 *  terminating null byte, to a buffer pointed to by @dest.
 * @dest:Destination.
 * @src: source string.
 *
 * Return: A pointer to @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int s;

	for (s = 0; src[s] != '\0'; s++)
	{
		dest[s] = src[s];
	}

	dest[s++] = '\0';

	return (dest);
}

