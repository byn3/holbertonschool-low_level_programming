#include "holberton.h"

/**
* factorial - prints the factorial of a given number
* @n: an int given by main
*
* Description: This will use recursion and no loops
*	to achieve a goal or mimic a function
* Return: returns the factorial result
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
