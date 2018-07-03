#include "holberton.h"

/**
* print_rev - prints a string in reverse
* @s: a pointer given by the main function
*
* Description: Uses headers to link and pointers to achieve goal
* Return: is void. no return.
* I tried a sizeof(s) strat at first. testing
*/

void print_rev(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
		counter++;

	while (counter)
	{
		_putchar(s[counter]);
		counter--;
	}
	_putchar(s[0]);
	_putchar(10);
}
