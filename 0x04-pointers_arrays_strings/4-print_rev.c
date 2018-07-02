#include "holberton.h"

/**
* print_rev - prints a string in reverse
* @*s: a pointer given by the main function
*
* Description: Uses headers to link and pointers to achieve goal
* Return: is void. no return.
* I tried a sizeof(s) strat at firest
*/

void print_rev(char *s)
{
	char *end;
	char temp;
	end = s;
	while (end != '\0')
		end++;
	end--;/* since we want string length - 1 for the end*/
	for (; s < end; s++, end--)
	{
		temp = end;
		end = (char) s;
		s = temp;
		_putchar(temp);
	}
	_putchar(10);
}
