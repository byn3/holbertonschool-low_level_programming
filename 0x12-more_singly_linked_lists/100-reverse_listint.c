#include "lists.h"

/**
* reverse_listint - a function taht reverses a linked list
* @head: he head node. first node. the OG. the one
*
* Description: reverses a list but keeps NULL at the end duhhh
* Return: returns the revered list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *previous = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
