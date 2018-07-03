#include "holberton.h"

/**
* puts2 - prints every other char
* @str: a pointer given by the main function
*
* Description: Uses headers to link and pointers to achieve goal
* Return: is void. no return.
* this uses the strlen code basically
* it prints starting from the 0 index and skips every other by
* using an i += 2 increment
* then i putchar each i to achieve the goal.
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
