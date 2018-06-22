#include <stdio.h>
#include <stdlib.h>

/**
* main - prints out 0-99 with spaces and commas
* Description: Program that prints out 0-99 using 2 loop and satements inside
* Return: int 0 when done and no errors
*/

int main(void)
{
	int x;
	int y;

	for (x = 48; x < 58; x++)
	{
		for (y = 48; y < 58; y++)
		{
			putchar(x);
			putchar(y);
			if (y == 57 && x == 57)
				break;
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
