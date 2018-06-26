#include <stdio.h>

/**
* main - prints the first 50 fib numbers
* Description: prints the fub numbers up to the 50th with new lines
* Return: 0 if no error.
*/

int main(void)
{
	long i, total, fib1, fib2;

	i = 1;
	fib1 = 0;
	fib2 = 1;
	while (i <= 51)
	{
		total = fib1 + fib2;
		fib2 = fib1;
		fib1 = total;
		if (i != 51  && i != 1)
			printf("%ld, ", total);
		else if (i == 1)
			;
		else
			printf("%ld", total);
		i++;
	}
	printf("\n");
	return (0);
}
