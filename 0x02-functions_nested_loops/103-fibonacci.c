#include <stdio.h>

/**
* main - prints the sum of fib numbers
* Description: cannot past 4 million. evens only
* Return: 0 if no error.
*/

int main(void)
{
	long fib1 = 1, fib2 = 2, total = 0, summed = 0;

	while (total < 4000000)
	{
		if ((total % 2) == 0)
			summed += total;
		total = fib1 + fib2;
		fib2 = fib1;
		fib1 = total;
	}
	printf("%ld\n", summed);
	return (0);
}
