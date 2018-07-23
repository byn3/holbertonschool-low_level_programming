#include "dog.h"

/**
* init_dog - a function that initializes a variable of type struct dog
* @d: the doge structure passed to us
* @name: the name of the dog
* @age: the age of the dog
* @owner: the owner or happiest person in this code
*
* Description: this makes a new structure of type dog
* Return: none it is void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
