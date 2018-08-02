#include "lists.h"

/**
* list_len - a function that counts the number of nodes
* @h: the list given to us from the main
*
* Description: prints all the elements of the list_t
* Return: the number of nodes or -1 if error
*/

size_t list_len(const list_t *h)
{
	if (!h)
		return (0);
	if (h->next == NULL)
		return (1);
	h = h->next;
	return (1 + list_len(h));
}
