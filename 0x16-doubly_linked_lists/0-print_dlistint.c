#include "lists.h"
#include <stdio.h>

/**
* print_dlistint - function that prints all elements in a doubly linked list
* @h: the head node passed to us
*
* Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
