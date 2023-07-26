#include "main.h"

/**
 *_strcat - function commute two strings
 * @dest: Destination string 
 * @src: Source string
 * Return: A pointer to the destination string @dest.
 */
 
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
