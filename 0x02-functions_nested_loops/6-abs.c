/*
 * File: 6-abs.c
 * Auth: Saif Eddine belhaj
 *
 */

#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @s: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */

int _abs(int s)
{
	if (s < 0)
	{
		return (s * -1);
	}
	else
	{
		return (s);
	}
}



