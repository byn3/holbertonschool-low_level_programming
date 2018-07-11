#include "holberton.h"

/**
* _sqrt_recursion- returns the natural square root of a number
* @n: an int given by main
*
* Description: This will use recursion and no loops
*	to achieve a goal or mimic a function
* Return: read first comment line plz
*/

int f1( int n, int i)
{
	if (n - (i * i) == 0)
		return (i);
	else if (i * i > n)
		return (-1);
	
	return f1(n , i + 1);
}

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (f1(n, i));

//https://stackoverflow.com/questions/19923953/recursive-algorithm-to-calculate-square-root
	
}
