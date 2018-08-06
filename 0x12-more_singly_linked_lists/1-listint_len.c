#include "lists.h"

/**
* listint_len - returns the number of nodes
* @h: the pointer to the head node given to us
*
* Description: kinda like problem 0 from 0x11
* Return: The number of nodes or -1 if error
*/

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
