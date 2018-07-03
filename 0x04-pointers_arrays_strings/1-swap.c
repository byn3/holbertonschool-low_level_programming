#include "holberton.h"

/**
* swap_int - swaps two integers
* @a: a pointer given by the main function
* @b: a pointer given by the main function
*
* Description: Uses headers to link and pointers to achieve goal
* Return: is void. no return.
* Swaps the values of a and b using pointers and
* a temp variable that holds one of the values to swap later
* we were given their memory addresses and we dereferenced them
* and swapped their values using this function.
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
