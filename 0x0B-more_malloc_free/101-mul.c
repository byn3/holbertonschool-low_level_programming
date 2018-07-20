#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - multiplies two positive numbers
* @argc: number of arguments
* @argv: the values in each argc element
*
* Description: its like infinite add but with multiplication
* Return: print the result. return 0 if success
*/

int main(int argc, char **argv)
{
	char error[] = "Error";
	int i = 0;
	char *loop;
	char *sumarray;
	int tens = 0;
	int sum = 0;
	int swap = 0;
	int begin = 0;
	int k = 0;

	loop = malloc(sizeof(argv[2]));
	if (loop == NULL)
		return (0);
	sumarray = malloc(sizeof(argv[2]) * sizeof(argv[1]) + 1);
	if (sumarray == NULL)
		return (0);
	if (argc != 3)
	{
		while (error[i])
			_putchar(error[i]);
		exit(98);
	}
	if (argv[1] == 0 || argv[2] == 0)
	{
		_putchar('0');
		return (0);
	}
	while (loop[i] != *argv[2])
	{
		for (i = 0; argv[i]; i++, k++)/* E */
		{
			sum = tens;
			sum += argv[1][i] - '0';
			tens = sum / 10;/* H */
			sumarray[k] = sum % 10 + '0';
		}
		i++;
	}
	sumarray[k] = '\0';
	k--;
	for ( ; begin < k; k--, begin++)
	{
		swap = sumarray[k];
		sumarray[k] = sumarray[begin];
		sumarray[begin] = swap;
	}
	for (i = 0; sumarray[i]; i++)
		_putchar(sumarray[i]);
	free(loop);
	return (0);
}
