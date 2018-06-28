#include <stdio.h>
#define BILLION 1000000000

/**
* main - prints the first 98 fib numbers
* Description: cannot use any extra libraries or long long.
* Must use overflow methods
* Return: 0 if no error.
*/

int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1, total = 0;
	unsigned long fibONE_left, fibONE_right;
	unsigned long fibTWO_left, fibTWO_right;
	unsigned long total_LEFT, total_RIGHT;

	fib1 = 1;
	fib2 = 2;
	total = fib1 + fib2;
	printf("%lu, ", fib1);
	printf("%lu, ", fib2);

	for (i = 3; i < 90; i++)
	{
		printf("%lu, ", total);
		fib1 = fib2;
		fib2 = total;
		total = fib1 + fib2;
	}

	fibTWO_left = fib2 / BILLION;
	fibTWO_right = fib2 % BILLION;
	total_LEFT = total / BILLION;
	total_RIGHT = total % BILLION;

	for (i = 90; i < 98; i++)
	{
		printf("%lu%lu, ", total_LEFT, total_RIGHT);
		fibONE_left = fibTWO_left;
		fibONE_right = fibTWO_right;
		fibTWO_left = total_LEFT;
		fibTWO_right = total_RIGHT;
		total_LEFT = (fibONE_left + fibTWO_left) +
			((fibONE_right + fibTWO_right) / BILLION);
		total_RIGHT = (fibONE_right + fibTWO_right) % BILLION;
	}
	printf("%lu%lu\n", total_LEFT, total_RIGHT);
	return (0);
}
