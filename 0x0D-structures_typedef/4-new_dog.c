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
	int length1 = 0;
	int length2 = 0;

	if (name == NULL)
	{
		free(new_doggy);
		return (NULL);
	}
	for (length1 = 0; name[length1]; length1++)
		;
	decoy1 = malloc(length1 * sizeof(char) + 1);
	if (decoy1 == NULL)
		return (NULL);
	new_doggy = malloc(sizeof(decoy1));
	if (new_doggy == NULL)
	{
		free(decoy1);
		return (NULL);
	}
	new_doggy = malloc(sizeof(float));
	if (new_doggy == NULL)
	{
		free(decoy1);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(decoy1);
		free(new_doggy);
		return (NULL);
	}
	for (length2 = 0; owner[length2]; length2++)
		;
	decoy2 = malloc (length2 * sizeof(char) + 1);
	if (decoy2 == NULL)
	{
		return (NULL);
	}
	new_doggy = malloc(sizeof(decoy2));


	return (new_doggy);
}

for name and owner
count length. malloc lenth
string copy
free.
