#include <stdio.h>
#include <stdlib.h>

/**
* main - prints out quad combo numbers
* Description: duplicates allowed. This is the typical
* i j k l 4 variables 2 loops nested and put the number
* now and doing more math. char 32 is a space and 44 is a comma,
* Return: int 0 when done and no errors
*/

int main(void)
{
	int i, j, a, b, c, d;

	for (i = 0; i <= 98; i++)
	{
		a = i / 10;
		b = i % 10;
		for (j = i + 1; j <= 99; j++)
		{	
			c = j / 10 + '0';
			d = j % 10 + '0';
			putchar(a + '0');
			putchar(b + '0');
			putchar(32);
			putchar(c);
			putchar(d);
			if (a >= 9 && b >= 8 && c >= 9 && d >= 9)
				break;
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
