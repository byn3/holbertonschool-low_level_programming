#include <stdio.h>
#include <stdlib.h>

/**
* main - prints out 0-9 then a-f
* Description: Program that prints out alphanum hex first 16 letters
* Return: int 0 when done and no errors
*/

int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
		putchar(x);
	for (x = 97; x < 103; x++)
		putchar(x);
	putchar(10);
	return (0);
}
