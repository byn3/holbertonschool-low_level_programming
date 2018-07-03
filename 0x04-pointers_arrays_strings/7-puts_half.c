#include "holberton.h"

/**
* puts_half - prints second half of a string
* @str: a pointer given by the main function
*
* Description: Uses headers to link and pointers to achieve goal
* Return: is void. no return.
*/

void puts_half(char *str)
{
	int counter = 0;
	int i;

	while (str[counter] != '\0')
		counter++;
	for (i = (counter - 1) /2; i < counter; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
