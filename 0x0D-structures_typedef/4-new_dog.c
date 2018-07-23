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
	int i = 0;
	struct dog_t *new_doggy;
	char *decoy1;
	char *decoy2;

	new_doggy = malloc(sizeof(struct dog_t));
	if (!new_doggy)
		return (0);
	while (name[i])
		i++;
	decoy1 = malloc(i * sizeof(char));
	if (!decoy1)
	{
		free(new_doggy);
		free(decoy1);
		return (0);
	}
	for (i = 0; name[i]; i++)
		decoy1[i] = name[i];
	decoy1[i] = '\0';
	i = 0;
	while (owner[i])
		i++;
	decoy2 = malloc(i * sizeof(char));
	if (!decoy2)
	{
		free(new_doggy);
		free(decoy1);
		free(decoy2);
		return (0);
	}
	for (i = 0; owner[i]; i++)
		decoy2[i] = owner[i];
	decoy2[i] = '\0';
	new_doggy->name = decoy1;
	new_doggy->age = age;
	new_doggy->owner = decoy2;
	return (new_doggy);
}
