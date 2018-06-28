#include "holberton.h"

/**
* print_number - outputs a number
* @n: an int given from main
* 
* Description: Uses headers to link and a nested loops to achieve goal
* Return: no return is void
*/

void print_number(int n)
{
	int x = n;

	if (n < 0)
	{
		x = -n;
		_putchar('-');
	}
	while (x > 1000000000)
	{
		x = x / 1000000000;
		_putchar(x + '0');
	}
	while (x > 100000000)
	{
		x = x / 100000000;
		_putchar(x + '0');
	}
	while (x > 10000000)
	{
		x = x / 10000000;
		_putchar(x + '0'); 
	}
	while (x > 1000000)
	{
		x = x / 1000000;
		_putchar(x + '0'); 
	}
	while (x > 100000)
	{
		x = x / 100000;
		_putchar(x + '0'); 
	}
	while (x > 10000)
	{
		x = x / 10000;
		_putchar(x + '0'); 
	}
	while (x > 1000)
	{
		x = x / 1000;
		_putchar(x + '0'); 
	}
	while (x > 100)
	{
		x = x / 100;
		_putchar(x + '0'); 
	}
	while (x > 10)
	{
		x = x / 10;
		_putchar(x + '0'); 
	}
	if (n > 0)
		_putchar((n % 10) + '0');
	else
		_putchar ((-n % 10) + '0');
}
