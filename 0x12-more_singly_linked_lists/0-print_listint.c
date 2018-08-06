#include "lists.h"

/**
* print_listint - a function that prints a linked lists' integers
* @h: the pointer to the head node given to us
*
* Description: kinda like problem 0 from 0x11
* Return: The number of nodes or -1 if error
*/

size_t print_listint(const listint_t *h)
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
