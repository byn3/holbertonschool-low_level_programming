#include <stdio.h>

/**
* main - prints the sum of fib numbers
* Description: cannot past 4 million. evens only
* Return: 0 if no error.
*/

int main(void)
{
	long i = 0, fib1 = 0, fib2 = 1, total = 0;
	long fib1a, fib1b, fib2a, fib2b, totala, totalb, fib3a, fib3b;
	
	while (i <= 98)
	{
		if (i < 92)
		{
			total = fib1 + fib2;
			fib2 = fib1;
			fib1 = total;
			printf("%lu, ", total);
			printf("\n");
		}
		else if (i == 92)
		{
			;
		}
		else if (i >= 92)/* int overflow starts when we to 93*/
		{
			totala = total / 10000000000;
			totalb = total % 10000000000;
			fib1a = fib1 / 10000000000;
			fib1b = fib1 % 10000000000;
			fib2a = fib2 / 10000000000;
			fib2b = fib2 % 10000000000;

			if ((fib1a / 1000000000 + fib2a / 1000000000) < 0)/*if no overflow */
			{
				totala = fib1a + fib2a;
				printf("%lu\n", totala);
			}
			else
			{	
				totala = (fib1a + fib2a)% 1000000000;
				printf("%lu\n", totala);
			}
			if ((fib2a / 1000000000 + fib2b / 1000000000) < 0)/*if no overflow*/
				totalb = fib1b + fib2b;
			else
				totalb = (fib1b + fib2b) % 1000000000;
			
			
		}
		i++;
	}
	return (0);
}
