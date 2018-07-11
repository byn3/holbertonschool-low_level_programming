#include "holberton.h"

/**
* is_prime- returns 1 if number is prime 0 if not
* @n: an int given by main
*
* Description: This will use recursion and no loops
*	to achieve a goal or mimic a function
* Return: read first comment line plz
*/
int global = 2;

int is_prime_number(int n)
{
	if (n % global == 0)
		return (0);
	else if (n == global)
		return (1);
	else
		global++;
		is_prime_number(n);
if n%1 ==it can be moded, then no
		so return 0
	return 1
}
