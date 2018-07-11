#include "holberton.h"

/**
* _strlen_recursion - returns the length of a string
* @s: a string given by main
*
* Description: This will use recursion and no loops
*	to achieve a goal or mimic a function
* Return: it returns the string length
*/

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
