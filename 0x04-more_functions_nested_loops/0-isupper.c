/*
 * File: 0-isupper.c
 * Auth: Saif Eddine belhaj
 */


/**
 * _isupper - check uppercase letters
 * @s: character to check
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */


int _isupper(int s)
{
	if (s >= 'A' && s <= 'Z')
		return (1);

	else
		return (0);
}

