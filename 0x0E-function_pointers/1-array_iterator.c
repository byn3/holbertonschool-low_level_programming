#include "function_pointers.h"

/**
* array_iterator - a function that executes a function
* @array: a pointer to an array
* @size: the size of the array
* @action: the function
*
* Description: Does stuff. learning function pointers. im hungry
* Return: void. no return. calls on stuff.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
