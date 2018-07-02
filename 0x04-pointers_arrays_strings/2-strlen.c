#include "holberton.h"

/**
* _strlen - returns a length of a string
* @*s: a pointer given by the main function
*
* Description: Uses headers to link and pointers to achieve goal
* Return: is void. no return.
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
