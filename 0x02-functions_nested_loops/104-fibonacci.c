#include <stdio.h>
#define BILLION 1000000000

/**
* main - prints the sum of fib numbers
* Description: cannot past 4 million. evens only
* Return: 0 if no error.
*/

int main(void)
{
	long i, fib1, fib2, total, fib1a, fib2a, fib2a, fib2b, totala, totalb = 0;

	fib2 = 1;
	while (i <= 79)
	{
		total = fib1 + fib2;
		fib2 = fib1;
		fib1 = total;
		if (i == 98)
			printf("%ld\n", total);
		else if (i != 0)
			printf("%ld, ", total);
		i++;
		
		if (i >= 90)/* int overflow starts when we at around 92 and 93*/
		{
			totala = total / BILLION;
			totalb = total % BILLION;
			fib1a = fib1 / BILLION;
			fib1b = fib1 % BILLION;
			fib2a = fib2 / BILLION;
			fib2b = fib2 % BILLION;



		}

	}
	return (0);
}
