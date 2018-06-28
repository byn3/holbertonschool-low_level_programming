#include <stdio.h>
#include <math.h>

/**
* main - finds the largest prime
* Description: Uses headers to link and a nested loops to achieve goal
* Return: 0 if no errors
*/

int main(void)
{
	unsigned long i = 2;
	unsigned long squareRoot;
	unsigned long biggest = 0;
	unsigned long number = 612852475143;

	/* we will only check to the sqrt of the number because math*/
	squareRoot = (sqrt(number) / 10) * 10;
	while (number > squareRoot)
	{/* while the number is bigger than the current sqrt, check modulus*/
		while (number % i == 0)
		{/*if the current number is moded by i, check if biggest*/
		/* and strip away by a factor of i, reducing number*/
		/* this also helps decrement the while loop */
			if (i > biggest)
				biggest = i;
			number = number / i;
		}
		/*increase i because no current factor of i was found */
		/* and by 2 because we do not need to check when i is even.*/
		/* but i cant get my code to work with i+=2. */
		i++;
	}
	printf("%lu\n", biggest);
	return (0);
}
