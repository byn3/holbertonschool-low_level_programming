#include <stdlib.h>
#include <stdio.h>

/**
* main - prints out a a lowercase alphabet
* Description: Program that uses a while loop, if statement,
* and ASCII to print alphabet
* Return: int 0 when done and no errors
*/

int main(void)
{
	int n = 97;
	char c;

	while (n < 123)
	{
		if (n)
		{
			c = (char) n;
			putchar(c);
			n++;
		}
	}
	putchar(10);
	return (0);
}
