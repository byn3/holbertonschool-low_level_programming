#include <stdio.h>

/**
* main - prints out lowercase alphabet in reverse
* Description: Program that prints out numbers using ASCII and reverse loop
* Return: int 0 when done and no errors
*/

int main(void)
{
	char x;
		
	for (x = 0x30; x > 0x3A; x++)
		putchar(x);
	for (x = 0x61; x > 0x67; x++)
		putchar(x);
	putchar(10);
	return (0);
}

