#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* add_dnodeint - a function that adds a node to the beginning of the list
* @head: the head node passed to us
* @n: the int value we want to store in new
*
* Return: the new element
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	(*head)->prev = new;
	return (new);
}
