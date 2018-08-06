#include "lists.h"

/**
* add_nodeint - adds a new node at the beginning of a linked list
* @head: the pointer to the head given to us
* @n: an int that we will make
*
* Description: adds new node to beginning of the linked list. return new head
* Return: the new head node or null if error or exit
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		exit(98);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
