#include "lists.h"

/**
* get_nodeint_at_index - a function that returns the nth node of linked list
* @head: the head node given to us
* @index: the nth node we want
*
* Description: does magic
* Return: the value of the nth node or null is not exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	if (!head)
		return (NULL);
	temp = head;
	for (i = 0; i < index && temp != NULL; i++)
		temp = temp->next;
	if (i == index)
		return (temp);
	return (NULL);
}
