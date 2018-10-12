#include "hash_tables.h"

/**
* hash_table_create - creates a hash table
* @size: how big is the has table?
*
* Return: returns a pointer to the newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *p;

	p = malloc(sizeof(hash_table_t)); /* malloc to store size&array */
	if (!p)
		return (NULL);
	p->size = size;
	p->array = malloc(sizeof(hash_node_t *) * size); /* malloc for each node */
	if (!(p->array))
		return (NULL);
	while (size--)
		p->array[size] = NULL;
	return (p);
}
