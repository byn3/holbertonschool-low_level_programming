#include "holberton.h"

/**
* print_times_table - prints out the n multiplication table
* @n: an int given by the main to print ut a n by n grid
* Description: Uses headers to link to another function and loops for output
*/

void print_times_table(int n)
{
	int i, j, whole, tens, ones = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			whole = i * j;
			tens = whole / 10 + '0';
			ones = whole % 10 + '0';
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
			}
			else if (j == 9)
			{
				if (whole > 10)
				{
					_putchar(tens);
					_putchar(ones);
				}
				else
				{
					_putchar(' ');
					_putchar(ones);
				}
			}
			else if (whole < 10)
			{
				_putchar(' ');
				_putchar(ones);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(tens);
				_putchar(ones);
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
