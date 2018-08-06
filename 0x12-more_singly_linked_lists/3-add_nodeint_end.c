#include "lists.h"

/**
* add_nodeint_end - adds a node to the end of a linked list
* @head: the pointer to the head node
* @n: the int we want copied over
*
* Description: Same as 0x11 problem 3
* Return: the head pointer or error
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *traverse;

	if (!head)
		exit(98);
	traverse = *head;
	add = malloc(sizeof(listint_t));
	if (!add)
		exit(98);
	add->n = n;
	add->next = NULL;
	if (*head == NULL)
	{
		*head = add;
		return (*head);
	}
	while (traverse->next)
		traverse = traverse->next;
	traverse->next = add;
	return (*head);
}
