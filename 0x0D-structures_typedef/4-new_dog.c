#include "dog.h"
#include <stdlib.h>

/**
* new_dog - a pointer that we will return to dog_t
* @name: woofy mdwoofer
* @age: wofteen
* @owner: mr woof
*
* Description: makes a new structure that returns a pointer
* Return: the pointer or null if error
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *new_doggy;

	new_doggy = malloc(sizeof(struct dog_t));
	if (!new_doggy)
		return (0);
	new_doggy->name = name;
	new_doggy->age = age;
	new_doggy->owner = owner;
	return (new_doggy);
}
