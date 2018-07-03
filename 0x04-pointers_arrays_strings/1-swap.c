#include "holberton.h"

/**
* swap_int - swaps two integers
* @a: a pointer given by the main function
* @b: a pointer given by the main function
*
* Description: Uses headers to link and pointers to achieve goal
* Return: is void. no return.
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
