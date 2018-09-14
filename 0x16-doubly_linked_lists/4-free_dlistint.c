#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint - frees a dlistint_t list
* @head: the head node we are at
*
* Return: none it is void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
