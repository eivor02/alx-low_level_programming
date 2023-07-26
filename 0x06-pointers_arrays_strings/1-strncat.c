#include "main.h"
#include <string.h>

/**
 * _strncat -  function that concatenates two strings.
 * @src: The source value
 * @dest: The destination value
 * @n: number of bytes from src.
 * Return: dest.
 */


char *_strncat(char *dest, char *src, int n)
{
	int s, b;

	for (s = 0; dest[s] != '\0'; s++)
	{
		continue;
	}
	for (b = 0; src[b] != '\0' && b < n; b++)
	{
		dest[s + b] = src[b];
	}
	dest[s + b] = '\0';
	return (dest);

