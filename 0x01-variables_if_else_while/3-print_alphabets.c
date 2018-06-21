#include <stdlib.h>
#include <stdio.h>

/**
* main - prints out a a lowercase alphabet and upeprcase after
* Description: Program that uses 2 while loop,
* and ASCII to print alphabet
* Return: int 0 when done and no errors
*/

int main(void)
{
	int n = 97;

	while (n < 123)
		putchar(n++);
	n = 65;
	while (n < 91)
		putchar(n++);
	putchar(10);
	return (0);
}
