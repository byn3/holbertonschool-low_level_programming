#include "holberton.h"

/**
* _atoi - convers a string to an int
* @s 
*/

int _atoi(char *s)
{
	int counter = 0;
	int i = 0;

	while (s[counter] != '\0')
	{
		if (s[counter] >= 48 && s[counter] <= 57)
		{
			i++;
			if (s[counter - 1] == '-')
				_putchar('-');
			_putchar(s[counter]);
		}
		if (s[counter] <= 48 || s[counter] >= 57)
		{
			if ( i > 0)
				break;
		}
	counter++;
	}
}
