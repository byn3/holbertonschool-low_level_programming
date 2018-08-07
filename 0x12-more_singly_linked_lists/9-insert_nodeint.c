#include "lists.h"

/**
* insert_nodeint_at_index - function that inserts a new node at a position
* @head: the head node given to us
* @idx: the index of the list where new node should be
* @n: the number of nodes i assume
*
* Description: This function works
* Return: the address of the new node or null if failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *insert;

	insert = malloc(sizeof(listint_t));
	if (!head || !insert)
		return (NULL);
	insert->n = n;
	if (idx == 0)
	{
		insert->next = *head;
		*head = insert;
		return (insert);
	}
	if (*head == 0)
		return (NULL);
	temp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	insert->next = temp->next;
	temp->next = insert;
	return (insert);
}
