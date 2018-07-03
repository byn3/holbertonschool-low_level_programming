#include "holberton.h"

/**
* puts2 - prints every other char
* @str: a pointer given by the main function
*
* Description: Uses headers to link and pointers to achieve goal
* Return: is void. no return.
*/

void puts2(char *str)
{
	int counter = 0;
	int i;

	while (str[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
