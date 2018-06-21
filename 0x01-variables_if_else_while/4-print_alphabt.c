#include <stdlib.h>
#include <stdio.h>

/**
* main - prints out a a lowercase alphabet minus q and e
* Description: Program that uses a while loop, if statement,
* and ASCII to print alphabet
* Return: int 0 when done and no errors
*/

int main(void)
{
	int n = 97;

	while (n < 123)
	{
		if (n == 101)
			n++;
		else if (n == 113)
			n++;
		else
		{
			putchar(n);
			n++;
		}
	}
	putchar(10);
	return (0);
}
