#include "holberton.h"

/**
* _puts_recursion - prints a string followed by a new line
* @s: a string given by main
*
* Description: This will use recursion and no loops
*	to achieve a goal or mimic a function
* Return: none it is void.
*/

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
