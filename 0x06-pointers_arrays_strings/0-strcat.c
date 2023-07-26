#include "main.h"

/**
 *_strcat - function commute two strings
 * @dest: Destination string 
 * @src: Source string
 * Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int s;
	int b;

	s = 0;
	b = 0;

	while (dest[s] != '\0')
	{
		s++;
	}

	while (src[b] != '\0')
	{
		dest[s] = src[b];
		b++;
		s++;
	}

	dest[s] = '\0';
	return (dest);
}


