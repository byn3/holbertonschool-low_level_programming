#include "holberton.h"

/**
* main - program that prints out the alphabet with a new line
* Description: Uses headers to link to another function
* Return: int 0 when done and no errors
*/

void print_alphabet_x10(void)
{
	int i,j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 25; j++)
		{
			_putchar(j + 'a');
			j++;
		}
		_putchar(10);
	}
}
