#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_dnodeint_end - function that adds node at the end of a list
* @head: the head node pointer
* @n: the int we want stored in the new node
*
* Return: the new node's address
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	temp = *head;
	new->n = n;
	new->prev = *head;
	new->next = NULL;
	if (!temp)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;
	return (new);
}
