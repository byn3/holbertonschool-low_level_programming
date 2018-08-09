#include "holberton.h"


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp = n;
	unsigned long int temp2 = m;
	int count = 0;
	int count2 = 0;
	int bigger;
	int i;
	int array[1024];
	int array2[1024];
	int differences = 0;

	while (temp > 0)
	{
		temp = temp >> 1;
		count++;
	}
	while (temp2 > 0)
	{
		temp2 = temp2 >> 1;
		count2++;
	}
	bigger = (count > count2) ? count : count2;
	for (i = 0; i < bigger; i++)
	{
		array[i] = 0;
		array2[i] = 0;
	}
	for (count -= 1; count >= 0; count--)
	{
		i = n >> count;
		if (i & 1)
			array[count] = 1;
		else
			array[count] = 0;
	}
	for (count2 -= 1; count2 >= 0; count2--)
	{
		i = n >> count2;
		if (i & 1)
			array2[count2] = 1;
		else
			array2[count2] = 0;
	}
	for (i = 0, bigger -= 1; bigger >= 0; bigger--, i++)
	{
		if ((array[i]) != (array2[i]))
			differences++;
	}
	return (differences);
}
