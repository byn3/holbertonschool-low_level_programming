#include "lists.h"
#include <stdio.h>

/**
* free_list - frees the whole list_t
* @head: the pointer to the head of the linked list
*
* Description: fress all malloced linked lists
* Return: none it is void
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(temp);
}
