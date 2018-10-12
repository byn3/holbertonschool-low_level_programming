#include "hash_tables.h"
#include <string.h>

/**
* hash_table_set - a function that adds an element to the hash table
* @ht: the hash table
* @key: the key
* @value: the value
*
* Return: 1 if worked 0 if fuuuuuu
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new = NULL;
	hash_node_t *check = NULL;

	if (!ht || !key || !strcmp(key, ""))
		return (0); /* if null hash table, key, or empty key, error */
	index = key_index((const unsigned char *)key, ht->size);

	/* check if there a value associated with preexisting key, reassign val */
	check = ht->array[index];
	while (check)
	{
		if (!strcmp(key, check->value)) /* strcmp returns 0 if matches */
		{
			free(check->value); /* get rid of old value, replace it */
			check->value = strdup(value); /* str dup reallocs */
			if (!check->value) /* if strdup returned an error */
				return (0);
			return (1); /* exit cause we updated key's value */
		}
		check = check->next;
	}

	/* so there was no matching key, that means new key! */
	new = malloc(sizeof(hash_node_t)); /* malloc a node */
	if (!new) /* malloc error */
		return (0);
	new->key = strdup(key);
	if (!(new->key))
	{ /* error with duping key, free previous steps and exit */
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!(new->value))
	{ /* error with duping val, free previous steps and exit */
		free(new->key);
		free(new);
		return (0);
	}
	new->next = NULL; /* everything was assigned with no probs */
	if (ht->array[index]) /* if there is already a value in this key, */
		new->next = ht->array[index]; /* make the new node be the first */
	ht->array[index] = new;
	return (1);
}
