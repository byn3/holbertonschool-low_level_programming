#include "function_pointers.h"

/**
* int_index - searches for an int. is function. junction. conjunction
* @array: an array
* @size: i wear size 13s
* @cmp: does not stand for chimpanzee. fa sho
*
* Description: searches array for an int. returns the index of first
*	element that matched. returns -1 if anything fails
* Return: an int. or -1 if it failed
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
