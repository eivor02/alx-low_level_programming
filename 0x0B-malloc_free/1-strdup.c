#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Duplicate a string
  * @str: the source string
  *
  * Return: length of string
  */
char *_strdup(char *str)
{
	int f = 0, r = 1;
	char *b;

	if (str == NULL)
		return (NULL);

	while (str[r])
	{
		r++;
	}

	b = malloc((sizeof(char) * r) + 1);

	if (b == NULL)
		return (NULL);

	while (f < r)
	{
		b[f] = str[f];
		f++;
	}

	b[f] = '\0';
	return (b);
}
