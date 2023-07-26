#include "main.h"

/**
 * cap_sing - Capitalizes all words of a string.
 * @s: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *s)
{
	int b = 0;

	while (s[b])
	{
		while (!(s[b] >= 'a' && s[b] <= 'z'))
			b++;

		if (s[b - 1] == ' ' ||
		    s[b - 1] == '\t' ||
		    s[b - 1] == '\n' ||
		    s[b - 1] == ',' ||
		    s[b - 1] == ';' ||
		    s[b - 1] == '.' ||
		    s[b - 1] == '!' ||
		    s[b - 1] == '?' ||
		    s[b - 1] == '"' ||
		    s[b - 1] == '(' ||
		    s[b - 1] == ')' ||
		    s[b - 1] == '{' ||
		    s[b - 1] == '}' ||
		    b == 0)
			s[b] -= 32;

		b++;
	}

	return (s);
}


