#include <stdio.h>
#include <stdlib.h>

/**
* main - prints out triple combo numbers
* Description: duplicates not allowed. This is the typical
* x, y= x+1, z= y+1 algorithm. 3 loops nested and put the number
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
			if (x == 55 && y == 56 && z == 57)
				break;
			putchar(44);
			putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
