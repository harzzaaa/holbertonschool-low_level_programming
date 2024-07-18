#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - Function who perform op asked by user
 * @s: op as arg
 * Return: ptr to function
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

	int m = 0;

	while (ops[m].op != NULL)
	{
		if (*(ops[m].op) == *s && s[1] == '\0')
			return (ops[m].f);
		m++;
	}
	return (NULL);
}
