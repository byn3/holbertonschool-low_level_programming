#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - adds numbers. checks if number
* @argc: number of arguments
* @argv: the vector that hold the arguments
*
* Description: using arc and argv to achieve the intended function
* Return: returns 0 if it works or something else if error
*/

int main(int argc, char **argv)
{
	int sum = 0;
	int i = 1;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	while (argc > 1)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
		argc--;
	}
	printf("%i\n", sum);
	return (0);
}
