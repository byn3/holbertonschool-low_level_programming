#include "holberton.h"

/**
* main - program that prints out Holberton with a new line
* Description: Uses a local library and focuses on using functions and a loop
* Return: int 0 when done and no errors
*/

int main(void)
{
	char s[10] = "Holberton\n";
	int i;
	
	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (0);
}
