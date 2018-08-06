#include "lists.h"

/**
* sum_listint - a function that adds
* @head: the pointer to the head node given to us
*
* Description: kinda like problem 0 from 0x11
* Return: The number of nodes or -1 if error
*/

int sum_listint(listint_t *head)
{
	int count = 0;

	while (head)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
