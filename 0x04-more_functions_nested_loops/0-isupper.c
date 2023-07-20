/*
 * File: 0-isupper.c
 * Auth: Saif Eddine belhaj
 */


/**
 * _isupper - check uppercase letters
 * @c: character to check
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */


int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);
}
