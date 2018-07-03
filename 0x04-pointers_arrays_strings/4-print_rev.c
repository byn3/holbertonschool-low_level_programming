#include "holberton.h"

/**
* print_rev - prints a string in reverse
* @s: a pointer given by the main function
*
* Description: Uses headers to link and pointers to achieve goal
* Return: is void. no return.
* I tried a sizeof(s) strat at first.
* So i have a counter, that will be my _strlen basically.
* and do a while loop for the amount of my counter,
* i will put char starting from the end to the beginning
* but i ran into a problem printing the 0 index
* so i hardcoded it and out it in at the end before newline
*/

void print_rev(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
		counter++;

	while (counter)
	{
		_putchar(s[counter - 1]);
		counter--;
	}
	_putchar(10);
}
