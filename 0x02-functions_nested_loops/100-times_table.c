#include "holberton.h"

/**
* print_times_table - prints out the n multiplication table
* @n: an int given by the main to print ut a n by n grid
* Description: Uses headers to link to another function and loops for output
*/

void print_times_table(int n)
{
	int i, j, whole, benjamin, tens, ones = 0;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
	else if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				whole = i * j;
				benjamin = whole / 100 + '0';
				tens = ((whole / 10) % 10) + '0';
				ones = whole % 10 + '0';
				if (j == 0)/* the very left column */
				{
					_putchar('0');
					_putchar(',');
					_putchar(' ');
				}
				else if (j == n)/* the very right column */
				{
					if (whole >= 100)
					{
						_putchar(benjamin);
						_putchar(tens);
						_putchar(ones);
					}
					else if (whole >= 10)
					{
						_putchar(' ');
						_putchar(tens);
						_putchar(ones);
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(ones);
					}
				}
				else if (whole < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(ones);
					_putchar(',');
					_putchar(' ');
				}
				else if (whole < 100)
				{
					_putchar(' ');
					_putchar(tens);
					_putchar(ones);
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(benjamin);
					_putchar(tens);
					_putchar(ones);
					_putchar(',');
					_putchar(' ');

				}
			}
		_putchar('\n');
		}

	}
}
