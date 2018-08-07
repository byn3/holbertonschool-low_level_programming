#include "lists.h"

/**
* free_listint - a function that frees a list
* @head: the head pointer that is given to us
*
* Description: frees the whole list
* Return: Nothing it is void
*/

void free_listint(listint_t *head)
{
	listint_t *freeME;

	if (!head)
		return;
	while (head)
	{
		freeME = head;
		head = head->next;
		free(freeME);
	}
}
