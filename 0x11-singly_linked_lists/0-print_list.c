#include "lists.h"

/**
* print_list - a function that prints a linked list
* @h: the list given to us from the main
*
* Description: prints all the elements of the list_t
* Return: the number of nodes or -1 if error
*/

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (!(h->str))
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
