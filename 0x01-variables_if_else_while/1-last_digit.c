#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdio.h>

/**
* main - prints out a random number value and last digit
* Description: Program that uses rand, srand, RAND_MAX, math header
* and code to output lines
* Return: int 0 when done and no errors
*/

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
		n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else if (last < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n"
		, n, last);
	}
	return (0);
}
