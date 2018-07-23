#include "dog.h"
#include <stdlib.h>

/**
* free_dog - a function that lets the dogs out
* @d: a pointer to the dog structure. free them
*
* Description: Who let the dogs out
* Return: none. is void.
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
