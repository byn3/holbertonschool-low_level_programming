#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that prints its own opcodes from its own main function
* @argc: number of arguments. should not be anything other than 2
* @argv: the values of the stuff
*
* Description: lots of stuff going on
* Return: returns a lot of stuff
*/

int main(int argc, char **argv)
{
	int i;

	i = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	printf("%p\n", main);
	return (0);
}
