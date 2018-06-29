#include <stdio.h>
#include <stdlib.h>

/**
* main - prints out quad combo numbers
* Description: duplicates allowed. This is the typical
* i, j, k, l= 4 variables 2 loops nested and put the number
* now and doing more math. char 32 is a space and 44 is a comma,
* Return: int 0 when done and no errors
* A: Outer Loop. Loop through 98 times
* B: Inner Loop. Loop through 99 times
* C: Print out the first digit of the first loop.
* Print out the second digit of the first loop.
* Print a space using ASCII
* Print the first digit of the inner loop.
* Print the second digit of the inner loop.
* D: Break if we reach our max of 98 99
*/

int main(void)
{
	int i, j, a, b, c, d;

	for (i = 0; i <= 98; i++)/* A */
	{
		a = i / 10;
		b = i % 10;
		for (j = i + 1; j <= 99; j++)/* B */
		{
			c = j / 10 + '0';/* C */
			d = j % 10 + '0';
			putchar(a + '0');
			putchar(b + '0');
			putchar(32);
			putchar(c);
			putchar(d);
			if (a >= 9 && b >= 8 && c >= 9 && d >= 9)/* D */
				break;
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
