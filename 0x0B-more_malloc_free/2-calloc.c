#include "holberton.h"
#include <stdlib.h>

/**
* _calloc - a function that allocates memory for an array using malloc
* @nmemb: how many elements
* @size:the sizeof data type
*
* Description: allocates memory and behaves like the calloc function
*	make our own bootleg version. makes array of nmemb elements
*	of byte size size. and returns that pointer. set memory to 0
* Return: a pointer or null if errors
*/




void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (size <= 0 || nmemb <= 0)
		return (NULL);
	pointer = malloc(nmemb * (size));
	if (pointer == NULL)
		return (NULL);
	return (pointer);
}
