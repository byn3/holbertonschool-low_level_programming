#include "lists.h"

/**
* pop_listint - a function that deletes the head node and return that data
* @head: the pointer to the pointer head
*
* Description: deletes the beginning node
* Return: the value of the popped node
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int pop = 0;

	if (!(*head))
		return (0);
	temp = (*head)->next;
	pop = (*head)->n;
	free(*head);
	*head = temp;
	return (pop);
}
