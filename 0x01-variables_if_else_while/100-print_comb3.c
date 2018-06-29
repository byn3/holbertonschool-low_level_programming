#include <stdio.h>
#include <stdlib.h>

/**
* main - prints out lowest of 2 numbers
* Description: Program that combines 2 numbers amd
* prints the lowest combination of the 2. duplicates like 11 are excluded
* Return: int 0 when done and no errors
* A: Using ASCII, range of 0-9.
* B: The y will be one ahead of x
* C: If we are at 8 and 9, we break.=, else print the punctuations
* of a comma(44) and space(32) and a new line at the end(10)
*/

int main(void)
{
	int x;
	int y;

	for (x = 48; x < 58; x++)/* A */
	{
		for (y = x + 1; y < 58; y++)/* B */
		{
			putchar(x);
			putchar(y);
			if (x == 56 && y == 57)/* C */
				break;
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
