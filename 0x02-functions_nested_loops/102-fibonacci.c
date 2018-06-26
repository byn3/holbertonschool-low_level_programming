#include <stdio.h>

/**
* main - prints the first 50 fib numbers
* Description : prints the fub numbers up to the 50th with new lines
* Return: 0 if no error.
*/

int main(void)
{
	int i;
	long first, second, total;

	i = 1;
	first = 0;
	second = 1;
	while (i <= 49)
	{
		total = first + second;
		first = second;
		second = total;
		if (i != 49)
			printf("%ld, ", total);
		else
			printf("%ld", total);
		i++;
	}
	printf("\n");
	return (0);
}
