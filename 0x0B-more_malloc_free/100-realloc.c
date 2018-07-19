#include "holberton.h"
#include <stdlib.h>

/**
*
*/

void copyit(int *ptr, int *pointer, int old_size)
{
	if (old_size)
	{
		*pointer = *ptr;
		copyit(ptr + 1, pointer + 1, old_size - 1);
	}
}

/**
* _realloc - write a function that reallocates a memory
* @ptr: a old pointer given to us
* @old_size: the old size of the memory
* @new_size: the new size of the memory
*
* Description: omg there are too many specifics for this
* Return: returns the pointer or nullllllll
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pointer;

	if (old_size == new_size)
		return ptr;
	if (ptr == NULL)
	{
		free(ptr);
		pointer = malloc(new_size);
	}
	else
		pointer = malloc(new_size);
	if (pointer == NULL)
		return (NULL);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		copyit(ptr, pointer, old_size);
	}
	return (pointer);


}
