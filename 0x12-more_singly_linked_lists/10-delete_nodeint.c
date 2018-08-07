#include "lists.h"

/**
* delete_nodeint_at_index - deletes node at the index
* @head: the head node
* @index: where we want stuff to happen
*
* Description: This is like adding but subtracting. similar to last problem
* Return: 1 or -1. 1 if succeed -1 if not
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *before;

	if (!(*head))
		return (-1);
	temp = *head;
	before = *head;
	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		(*head) = temp;
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (temp == 0)
			return (-1);
		if (i < index - 1)
			before = before->next;
		temp = temp->next;
	}
	before->next = temp->next;
	free(temp);
	return (1);
}
