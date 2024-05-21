#include "3-calc.h"
<<<<<<< HEAD
#include <stdlib.h>
/**
 * get_op_func - Selects the correct function to perform
 *               the operation asked by the user.
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function corresponding
 *         to the operator given as a parameter.
=======
#include <string.h>

/**
 * get_op_func - selects the correct operation toperform
 * @s: operation to perform
 *
 * Return: pointer to the correct function
>>>>>>> refs/remotes/origin/master
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
<<<<<<< HEAD
		{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

=======
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
			break;
		i++;
	}
>>>>>>> refs/remotes/origin/master
	return (ops[i].f);
}
