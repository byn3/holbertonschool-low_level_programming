#include "hash_tables.h"

/**
* key_index - a function that gives me the index of a key
* @key: the key, not the value. basically where is the key's index??
* @size: the size of the array hash table
*
* Return: returns the index number
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int keyModedBySize;

	keyModedBySize = hash_djb2(key) % size;
	return (keyModedBySize); /* all this kinds self explanitory huh? */
}
