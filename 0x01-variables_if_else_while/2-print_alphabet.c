#include <stdlib.h>
#include <stdio.h>

/**
* main - prints out a a lowercase alphabet
* Description: Program that uses a for loop and ASCII to print alphabet
* Return: int 0 when done and no errors
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z' ; c++)
		putchar("%c", c);
	return (0);
}
