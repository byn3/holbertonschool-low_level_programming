#include "lists.h"
#include <stdlib.h>

/**
* get_dnodeint_at_index - function that returns the nth node
* @head: the head node given to us
* @index: index which number index we want
*
* Return: the node at the index . head is node 0
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	/* should i worry about a negative index? its unsigned tho */
	while (count != index)
	{
		if (head->next == NULL)
			return (NULL);
		count++;
		head = head->next;
	}
	return (head);
}
