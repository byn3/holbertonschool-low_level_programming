#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - prints the minumin number of coins for perfect change
* @argc: number of arguments
* @argv: the vector that hold the arguments
*
* Description: using arc and argv to achieve the intended function
* Return: returns 0 if it works or something else if error
*/

int main(int argc, char **argv)
{
	int number = 0;
	int count = 0;

	if (argc != 2 || !isdigit(*argv[1]))
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	while (number > 0)
	{
		while (number >= 25)
		{
			number -= 25;
			count++;
		}
		while (number >= 10)
		{
			number -= 10;
			count++;
		}
		while (number >= 5)
		{
			number -= 5;
			count++;
		}
		while (number >= 2)
		{
			number -= 2;
			count++;
		}
		while (number >= 1)
		{
			number -= 1;
			count++;
		}
	}
	printf("%i\n", count);
	return (0);
}
