#include "holberton.h"

/**
* print_rev - prints a string in reverse
* @*s: a pointer given by the main function
*
* Description: Uses headers to link and pointers to achieve goal
* Return: is void. no return.
* I tried a sizeof(s) strat at firest
*/

int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
        {
		counter++;
	}
	return counter;
}

void print_rev(char *s)
{
	char letter;
	char *begin = s;
	char *end = begin + _strlen(s) - 1;

	if (*s == '\0')
		return;
	while ( end > begin)
	{
		letter = *end;
		*end-- = *begin;
		*begin++ = letter;
		_putchar(letter);
	}
}
