#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings up to n bytes.
 * @s1: first string.
 * @s2: second string.
 * @n: maximum number of bytes from s2 to concatenate.
 *
 * Return: pointer to the allocated memory containing the concatenated string.
 * If malloc fails, the function returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int ls1 = 0, ls2 = 0, lsout = 0, i = 0;
	char *sout;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[ls1] != '\0')
		ls1++;

	while (s2[ls2] != '\0')
		ls2++;

	if (n > ls2)
		n = ls2;

	lsout = ls1 + n;

	sout = malloc((lsout + 1) * sizeof(char));

	if (sout == NULL)
		return NULL;

	for (; i < lsout; i++)
	{
		if (i < ls1)
			sout[i] = s1[i];
		else
			sout[i] = s2[i - ls1];
	}

	sout[i] = '\0';

	return sout;
}
