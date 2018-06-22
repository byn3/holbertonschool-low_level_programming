#include <stdio.h>
#include <stdlib.h>

/**
* main - prints out quad combo numbers
* Description: duplicates allowed. This is the typical
* x, y= x+1, z= y+1 algorithm. 4 loops nested and put the number
* a = z+1 now and doing more math. char 32 is a space and 44 is a comma,
* Return: int 0 when done and no errors
*/

int main(void)
{
	int x;
	int y;
	int z;
	int a;

	for (x = 48; x < 58; x++)
	{
		for (y = 48; y < 58; y++)
		{
			for (z = x; z < 58; z++)
			{
				for (a = y + 1; a < 58; a++)
				{
				putchar(x);
				putchar(y);
				putchar(32);
				putchar(z);
				putchar(a);
				if (x == 57 && y == 56 && z == 57 && a == 57)
					break;
				putchar(44);
				putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
