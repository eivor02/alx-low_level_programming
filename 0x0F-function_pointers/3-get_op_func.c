#include "3-calc.h"

/**
 * get_op_func - Selects the appropriate function to perform
 *               the requested operation based on the operator.
 * @s: Char operator.
 *
 * Return: Pointer to the function that corresponds to the operator.
 *         If the operator is not found, returns NULL.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	return (NULL);  // Operator not found, handle the error accordingly.
}
