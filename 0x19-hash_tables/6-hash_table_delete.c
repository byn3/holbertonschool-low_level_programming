#include "hash_tables.h"

/**
* hash_table_delete- deletes the hash table. frees everything
* @ht: the hash table
*
* Return: none it is void...
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	hash_node_t *headTemp; /* basically head placeholder */
	unsigned int index = 0;

	if (!ht) /* nothing to free */
		return;
	while (index < ht->size)
	{ /* loop through the whole hash table */
		headTemp = ht->array[index];
		while (headTemp)
		{ /* free the D */
			temp = headTemp->next;
			free(headTemp->key);
			free(headTemp->value);
			free(headTemp);
			headTemp = temp;
		}

		index++;
	}
	/* final free of the outer matrix components */
	free(ht->array);
	free(ht);
}
