#include <stdio.h>

/**
* main - prints the first 98 fib numbers
* Description: cannot use any extra libraries or long long.
* Must use overflow methods
* Return: 0 if no error.
*/

int main(void)
{
	int i, overflowRIGHT, overflowLEFT;
	unsigned long fib1 = 1, fib2 = 1, total = 0;
	unsigned long fibONE_left, fibONE_right;
	unsigned long fibTWO_left, fibTWO_right;
	unsigned long total_LEFT, total_RIGHT;

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

		fibONE_left = fib1 / 1000000000;
		fibONE_right = fib1 % 1000000000;
		fibTWO_left = fib2 / 1000000000;
		fibTWO_right = fib2 % 1000000000;

		if (i == 92)
		{
			for (i = 92; i <= 98; i++)/* int overflow starts when we at 93*/
			{
				overflowRIGHT = (fibONE_right + fibTWO_right) / 1000000000;
				overflowLEFT = (fibTWO_left + fibTWO_right) / 1000000000;
				total_LEFT = (fibONE_left + fibTWO_left) + overflowRIGHT;
				total_RIGHT = (fibONE_right + fibTWO_right) - (overflowRIGHT * 1000000000);
				if (i < 98 && overflowRIGHT <= 0)
					printf("%10lu%10lu, ", total_LEFT, total_RIGHT);
				else if ( i < 98 && overflowLEFT > 0)
					printf("%d%11lu%11lu, ", overflowLEFT, total_LEFT, total_RIGHT);
				else
					printf("%11lu%11lu", total_LEFT, total_RIGHT);

				fibONE_left = fibTWO_left;
				fibONE_right = fibTWO_right;
				fibTWO_left = total_LEFT;
				fibTWO_right = total_RIGHT;
			}
		}
		i++;
	}
	printf("\n");
	return (0);
}
