#include "sort.h"

/**
* bubble_sort - implements the bubble sort algo for an array of ints
* @array: the array we are iterating through
* @size: the size of the array
*
* Return: none it is voiderino
*/

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t temp;
	size_t length = size;
	int flag;

	while (array)
	{
		if (length < 2)
			return;
		i = 1;
		flag = 0;
		while (i < length)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				flag = 1;
				print_array(array, size);
			}
			i++;
		}
		if (flag == 0)
			return;
		length--;
	}
}
