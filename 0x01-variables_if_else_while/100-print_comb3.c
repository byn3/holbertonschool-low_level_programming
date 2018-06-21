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
	int a;
	int b;

	for (x = 48; x < 58; x++)
	{
		for (y = 48; y < 58; y++)
		{
			a = (x * 10 + y);
			b = (y * 10 + x);
			if (a > b)
				putchar(b);
			else
				putchar(a);
		}
	}
	putchar(10);
	return (0);
}
