#include "main.h"

/**
 * _strncpy -  function that copies a string..
 * @src: The source string.
 * @dest: The buffer storing the string copy.
 * @n: The length of int.
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

