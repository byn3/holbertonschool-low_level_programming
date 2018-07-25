#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* get_op_func - will get the char operand
* @s: a character or operand
* Description: I am the hotline bling
* Return: an int and does the function.
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
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
