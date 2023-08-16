#ifndef _3_CALC_H_
#define _3_CALC_H_

/**
 * op_add - Adds two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Sum of the numbers.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Difference between the numbers.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Product of the numbers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Division result.
 *         If the divisor is 0, returns -1 to indicate an error.
 */
int op_div(int a, int b)
{
	if (b == 0)
		return -1;  /* Error: Division by zero */
	return (a / b);
}

/**
 * op_mod - Calculates the modulo of two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Remainder of the division.
 *         If the divisor is 0, returns -1 to indicate an error.
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return -1;  /* Error: Modulo by zero */
	return (a % b);
}

#endif /* _3_CALC_H_ */
