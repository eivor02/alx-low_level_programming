#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @s: The string to be encoded.
 *
 * Return:the encode string.
 */
char *leet(char *s)
{
	int b = 0, c;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[b])
	{
		for (c = 0; c <= 7; c++)
		{
			if (s[b] == leet[c] ||
			    s[b] - 32 == leet[c])
				s[b] = c + '0';
		}

		b++;
	}

	return (s);
}

