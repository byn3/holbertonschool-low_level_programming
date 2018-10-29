#include "sort.h"

/**
* selection_sort - uses a selection sort algo to sort an array
* @array: an array of ints
* @size: the size of the array
*
* Return: NONE it is voiderinoz
*/

void selection_sort(int *array, size_t size)
{
	size_t length = size;
	size_t i = 0;
	size_t j = 0;
	unsigned int smallest;
	int temp;

	for (i = 0; i < length - 1; i++)
	{
		smallest = i;
		for (j = i + 1; j < length; j++)
		{
			if (array[j] < array[smallest])
				smallest = j;
		}
		if (smallest != i)
		{
			temp = array[i];
			array[i] = array[smallest];
			array[smallest] = temp;
			print_array(array, size);
		}
	}
}
