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
char *_strcpy(char *dest, const char *src)
{
	int s = 0;

	while (src[s])
	{
		dest[s] = src[s];
		s++;
	}

	return (dest);
}

