#include <stdio.h>

/**
* main - prints out lowercase alphabet in reverse
* Description: Program that prints out numbers using ASCII and reverse loop
* Return: int 0 when done and no errors
*/

int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
		putchar(i);
	putchar(10);
	return (0);
}

