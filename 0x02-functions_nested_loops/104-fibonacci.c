#include <stdio.h>

/**
* main - prints the sum of fib numbers
* Description: cannot past 4 million. evens only
* Return: 0 if no error.
*/

int main(void)
{
	long i, fib1 = 0, fib2 = 1, total = 0;

	i = 0;
	while (i <= 15)
	{
		total = fib1 + fib2;
		fib2 = fib1;
		fib1 = total;
		if (i == 98)
			printf("%ld\n", total);
		else if (i != 0)
			printf("%ld, ", total);
		i++;
	}
	return (0);
}
