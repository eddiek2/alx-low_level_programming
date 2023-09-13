#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selecting the correct function
 * operation that is asked by users
 * @s: the argument that is passed by the operator
 * Return: corresponding pointer
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
}
