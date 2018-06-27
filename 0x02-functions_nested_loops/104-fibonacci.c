#include <stdio.h>

/**
* main - prints the first 98 fib numbers
* Description: no libraries or long long.
* Must use overflow methods
* Return: 0 if no error.
*/

int main(void)
{
	int i, overflow;
	unsigned long fib1 = 1, fib2 = 1, total = 0;
	unsigned long fib1a, fib1b, fib2a, fib2b, totala, totalb;
	
	i = 0;
	printf("1");
	while (i <= 98)
	{
		if (i < 92)
		{
			total = fib1 + fib2;
			fib1 = fib2;
			fib2 = total;
			printf("%lu, ", total);
		}

		fib1a = fib1 / 1000000000;
		fib1b = fib1 % 1000000000;
		fib2a = fib2 / 1000000000;
		fib2b = fib2 % 1000000000;
			
		if (i == 92)
		{
			for (i = 92; i <= 98; i++)/* int overflow starts when we at 93*/
			{
				overflow = (fib1b + fib2b) / 1000000000;
				totala = (fib1a + fib2a) + overflow;
				totalb = (fib1b + fib2b) - overflow * 1000000000;
				if (i < 98)
					printf("%lu%lu, ", totala, totalb);
				else
					printf("%lu%lu", totala, totalb);
				
				fib1a = fib2a;
				fib1b = fib2b;
				fib2a = totala;
				fib2b = totalb;
			}
		}
		i++;
	}
	printf("\n");
	return (0);
}
