#include "hash_tables.h"

/**
* hash_table_print - prints a hash table
* @ht: the hash table
*
* Return: nothing it is void
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned int index = 0;
	char *s = "";

	if (!ht)
		return;
	putchar('{'); /* doing this for the darn formatting requirements */

	while (index < ht->size)
	{ /* loop as many buckets as the whole hash table */
		temp = ht->array[index];
		if (temp) /* if the bucket is not empty, */
			printf("%s", s); /* prints nothing until we actually printed */
		while (temp) /* go through the bucket */
		{ /* print the key and the value */
			printf("'%s': '%s'", temp->key, temp->value);
			if (temp->next) /* if there is more, print puncuation */
				printf("%s", s);
			temp = temp->next;
			s = ", "; /* assigns the comma once we found a non empty index */
		}
		index++;
	}
	putchar('}');
	putchar(10);
}
