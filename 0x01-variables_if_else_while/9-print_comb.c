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

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x != 57)
		{
		putchar(44);
		putchar(32);
		}
	}
	putchar(10);
	return (0);
}
