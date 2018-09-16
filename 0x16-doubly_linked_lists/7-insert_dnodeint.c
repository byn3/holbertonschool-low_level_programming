#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index - insers a node at the given index
* @h: the head node of the list
* @idx: the index where we want it inserted
* @n: the number value we want to store as data
*
* Return: Returns the new node address
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *new;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	temp = *h;
	/* place it first index */
	if (idx == 0)
		return (add_dnodeint(h, n));
	/* place it after the first */
	while (count < idx - 1)
	{
		count++;
		if (temp)
			temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);
	new->next = temp->next;
	new->prev = temp;
	if (temp->next)
		temp->next->prev = new;
	temp->next = new;

	return (new);
}
