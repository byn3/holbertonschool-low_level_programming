#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* print_dog - prints a structure
* @d: the dog structure passed to us by main
*
* Description: we do stuff
* Return: nothing it is void. nil if error though. exit.
*/


void print_dog(struct dog *d)
{
	if (!d)
		exit(1);

	(d->name) ? printf("Name: %s\n", d->name) : printf("(nil)\n");
	(d->age) ? printf("Age: %f\n", d->age) : printf("(nil)\n");
	(d->owner) ? printf("Owner: %s\n", d->owner) : printf("(nil)\n");
}
