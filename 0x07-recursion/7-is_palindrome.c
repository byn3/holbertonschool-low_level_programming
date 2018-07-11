#include "holberton.h"

/**
*check_it
*/
int check_it(char *s, int i)
{
	if (i <= 0)
		return (1);
	if (*s == s[i])
		return check_it(s + 1, i - 1);
	return (0);
}

/**
* _strlen_recursion - returns the length of a string
* @s: a string given by main
*
* Description: This will use recursion and no loops
*	to achieve a goal or mimic a function
* Return: it returns the string length
*/

int _strlen(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + _strlen(s + 1));
}


/**
*
*/

int is_palindrome(char *s)
{
	int i = (_strlen(s) - 1) / 2;
	return check_it(s, i);
}


