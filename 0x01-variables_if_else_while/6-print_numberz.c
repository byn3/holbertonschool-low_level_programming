#include <stdio.h>

/**
* main - prints out 0-9 and a newline
* Description: Program that prints out numbers using ASCII
* Return: int 0 when done and no errors
*/

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar(10);
	return (0);
}

