#include "holberton.h"

/**
* _puts - prints a string with a newline
* @str: a pointer given by the main function
*
* Description: Uses headers to link and pointers to achieve goal
* Return: is void. no return.
*/

void _puts(char *str)
{
	int next = 0;

	while (str[next] != '\0')
	{
		_putchar(str[next]);
		next++;
	}
	_putchar(10);
}
