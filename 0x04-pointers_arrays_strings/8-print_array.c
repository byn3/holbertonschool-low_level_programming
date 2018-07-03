#include "holberton.h"
#include <stdio.h>

/**
* print_array - prints an array from main
* @a: a pointer given by the main function
* @n: an int given by the main function
*
* Description: Uses headers to link and pointers to achieve goal
* Return: is void. no return.
* we were given an array of size 5, but n could be any
* number, we start at 0 and iterate to n.
* we print it all. easy question. stop the
* punctuation when we reach the last index
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
