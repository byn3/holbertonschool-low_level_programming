#include "3-calc.h"
#include <stdio.h>

/**
* get_op_function - will get the char operand
* @s: a character or operand
* @int: two ints passed
* Description: I am the hotline bling
* Eeturn: an int and does the function.
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
	unsigned int i = 0;
	while (i < sizeof(ops) / sizeof(op_t))
	{
		if (s == ops[i].op)
			return (ops[i].f);
	i++;
	}
	return (ops->f);;
}
