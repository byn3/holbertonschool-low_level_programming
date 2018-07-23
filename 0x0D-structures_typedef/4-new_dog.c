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
	char *decoy1;
	char *decoy2;

	new_doggy = malloc(sizeof(struct dog_t));
	if (!new_doggy)
		return (0);
	decoy1 = malloc(sizeof(name));
	if (!decoy1)
	{
		free(new_doggy);
		free(decoy1);
		return (0);
	}
	decoy1 = name;
	decoy2 = malloc(sizeof(owner));
	if (!decoy2)
	{
		free(new_doggy);
		free(decoy1);
		free(decoy2);
		return (0);
	}
	decoy2 = owner;
	new_doggy->name = decoy1;
	new_doggy->age = age;
	new_doggy->owner = decoy2;
	return (new_doggy);
}
