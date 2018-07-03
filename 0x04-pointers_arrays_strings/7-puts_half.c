#include "holberton.h"

/**
* puts_half - prints second half of a string
* @str: a pointer given by the main function
*
* Description: Uses headers to link and pointers to achieve goal
* Return: is void. no return.
* counts the string length
* start at halfway in the string till the end
* which is counter / 2 and counter respectively
* then we just putchar it
*/

void puts_half(char *str)
{
	int counter = 0;
	int i;
	int odd;

	while (str[counter] != '\0')
		counter++;
	odd = counter;
	if (odd % 2 == 1)
	{
		for (i = (counter + 1) / 2; i < counter; i++)
			_putchar(str[i]);
		_putchar(10);
	}
	else
	{
		for (i = (counter) / 2; i < counter; i++)
			_putchar(str[i]);
		_putchar(10);
	}
}
