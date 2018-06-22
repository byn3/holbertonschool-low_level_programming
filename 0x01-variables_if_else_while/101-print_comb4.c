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
	int z;

	for (x = 48; x < 58; x++)
	{
		for (y = x + 1; y < 58; y++)
		{
			for (z = y + 1; z < 58; z++)
			{
			putchar(x);
			putchar(y);
			putchar(z);
			if (x == 55 && y == 56 && z== 57)
				break;
			putchar(44);
			putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
