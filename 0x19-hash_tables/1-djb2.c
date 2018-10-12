#include "hash_tables.h"

/**
* hash_djb2 - an algo that does stuff
* @str: the string we want hashed
*
* Description: we set hash to 5k. we have an int called c.
*	while c is the string, do stuff.
*	we make hash equal to 5381, left shifted by 5
* Return: the hash value, an unsigned long
*/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
