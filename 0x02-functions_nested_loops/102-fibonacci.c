#include <stdlib.h>
#include <stdio.h>

/**
* main - prints fizz bizz type of stuff.
* Description : add up the sums of multiples of 3 and 5 till 1024
* Return: 0 if no error.
*/
int main(void)
{
	int i, total = 0;

	while (i < 1024)
	{
		if ((i % 3) == 0)
			total += i;
		else if ((i % 5) == 0)
			total += i;
		i++;
	}
	printf("%i\n", total);
	return (0);
}
