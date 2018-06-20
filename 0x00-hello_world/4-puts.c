#include <stdio.h>

/**
* main - prints out a string via printf
* Description: Program that prints out the string s followed by a new line
* Return: int 0 when done and no errors
*/

int main(void)
{
	char *s;

	s = "with proper grammar, but the outcome is a piece of art,";
	printf("%s", *s);
	return (0);
}
