#include "hash_tables.h"
#include <string.h>

/**
* hash_table_get - gets a value that is associated with the key
* @ht: the hash table pointer
* @key: the key dude
*
* Return: returns the value or null if key no existee
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *check = NULL;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL); /* edge case checks */

	/* have to case index due to key_index prototype */
	index = key_index((const unsigned char *)key, ht->size);
	/* check is now the key's assigned index bucket */
	check = ht->array[index];
	while (check)
	{ /* check all the linked lists in this index */
		if (!strcmp(key, check->key))
			return (check->value); /* found match, return */
		check = check->next;
	}
	return (NULL);
}
