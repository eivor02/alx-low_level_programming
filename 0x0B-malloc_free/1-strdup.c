#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: the string duplicated
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
