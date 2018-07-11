#include "holberton.h"

/**
* _print_rev_recursion - prints a string in reverse
* @s: a string given by main
*
* Description: This will use recursion and no loops
*	to achieve a goal or mimic a function
* Return: none it is void.
*/

void _print_rev_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar(10);
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
