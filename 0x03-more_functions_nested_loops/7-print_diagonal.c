#include "holberton.h"

/**
* print_diagonal - prints a diagonal line with new line
* @n: an int given by main
*
* Description: Uses headers to link and a nested loops to achieve goal
* Return: void. no return.
*/

void print_diagonal(int n)
{
	int i, j;

	if ( n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = -i + n; j < n; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
