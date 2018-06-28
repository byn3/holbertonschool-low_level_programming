#include <stdio.h>
#include <math.h>

/**
* main - finds the largest prime
* Description: Uses headers to link and a nested loops to achieve goal
* Return: 0 if no errors
*/

int main(void)
{
	int i = 2;
	double temp = 0;
	double squareRoot;
	int biggest = 0:
	double number = 612852475143;

	squareRoot = (sqrt(number) / 10) * 10;
	while ( number > sqrt)
	{
		while (number % i == 0)
		{
			if (i > biggest)
				bigggest = i;
			number = number / i;
		}
		i++;
	}
	return (0);
}
