#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: number of arguments
* @argv: the vector that hold the arguments
*
* Description: using arc and argv to achieve the indended function
* Return: returns 0 if it works or something else if error
*/

int main(int argc, char **argv)
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	product = (atoi(argv[1]) * atoi(argv[2]));
	printf("%i\n", product);
	return (0);
}
