#include "holberton.h"
#include <stdio.h>
/**
* _strlen_recursion - returns the length of a string
* @s: a string given by main
*
* Description: This will use recursion and no loops
*       to achieve a goal or mimic a function
* Return: it returns the string length
*/

int _strlen(char *s)
{
        if (*s == 0)
                return (0);
        return (1 + _strlen(s + 1));
}


/**
*check_it
*/
int check_it(char *s, int i, int j)
{
	if (i >= j || s[i] == 0)
		return (1);
	if (*s != 0 && s[i] != s[j])
		return (0);
	return check_it(s, i + 1, j - 1);
}


/**
*
*/

int is_palindrome(char *s)
{
	int j = (_strlen(s));

	if (j == 0 || j == 1)
		return (1);
	return check_it(s, 0, j - 1);
}


