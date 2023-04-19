#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - introduces the code
 *               takes prompts from the user
 *@s: the s variable
 * Return: points to the variable
 *         gives the user a prompt
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
	i++;

	return (ops[i].f);
}
