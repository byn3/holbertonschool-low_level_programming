#include <stdio.h>

/**
* main - prints the sum of fib numbers
* Description: cannot past 4 million. evens only
* Return: 0 if no error.
*/

int main(void)
{
	long i = 0, fib1 = 0, fib2 = 1, total = 0;
	long fib1a, fib1b, fib2a, fib2b, totala, totalb, overflow;
	
	while (i <= 98)
	{
		if (i < 92)
		{
			total = fib1 + fib2;
			fib2 = fib1;
			fib1 = total;
			printf("%ld, ", total);
		}
		else if (i == 92)
		{
			fib1a = fib1 / 1000000000;
			fib1b = fib1 % 1000000000;
			fib2a = fib2 / 1000000000;
			fib2b = fib2 % 1000000000;
		}
		else/* int overflow starts when we at 93*/
		{
			overflow = (fib1b + fib2b) / 1000000000;
			totala = (fib1a + fib2a) + overflow;
			totalb = (fib2a + fib2b) - overflow * 1000000000;
			fib1b = fib2b;
			fib2b = totalb;
			fib1a = fib2a;
			fib2a = totala;
			if (i < 98)
				printf("%ld%ld, ", totala, totalb);
			else
				printf("%ldld", totala, totalb);
		}
		i++;
	}
	printf("\n");
	return (0);
}
