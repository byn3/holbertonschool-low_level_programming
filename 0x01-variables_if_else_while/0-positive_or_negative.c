#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdio.h>

/**
* main - prints out a random number value
* Description: Program that uses rand, srand, RAND_MAX, math header
* and code to output lines of output
* Return: int 0 when done and no errors
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		puts("0 is zero");
	}
	return (0);
}
