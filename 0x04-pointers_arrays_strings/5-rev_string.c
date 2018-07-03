#include "holberton.h"

/**
* rev_string - prints a string in reverse
* @s: a pointer given by the main function
*
* Description: Uses headers to link and pointers to achieve goal
* Return: is void. no return.
* I tried a sizeof(s) strat at first. testing
*/

void rev_string(char *s)
{
	int counter = 0;
	int i = 0;
	char swap;

	while (s[counter] != '\0')
		counter++;
	counter -= 1;
	while (counter > i)
	{
		swap = s[i];
		s[i] = s[counter];
		s[counter] = swap;
		counter--;
		i++;
	}
}
