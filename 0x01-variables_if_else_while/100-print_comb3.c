#include <stdio.h>
#include <stdlib.h>

/**
* main - prints out 0-9 with spaces and commas
* Description: Program that prints out 0-9 using 1 loop and satements inside
* Return: int 0 when done and no errors
*/

int main(void)
{
	int x;
	int y;

	for (x = 48; x < 58; x++)
	{
		for (y = x + 1; y < 58; y++)
		{
			putchar(x);
			putchar(y);
			if (x == 56 && y == 57)
				break;
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
