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
	int digit;
	int places = 1000000000;

	if (n == 0)
		_putchar('0');
	if (n < 0)
	{
		x = -n;
		_putchar('-');
	}
	while (places > x)
		places /= 10;
	while (places > 0)
	{
		digit = x / places;
		_putchar((digit % 10) + '0');
		places /= 10;
	}
}
