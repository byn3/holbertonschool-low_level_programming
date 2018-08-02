#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
* _strlen - a fake string kength counter i made
* @s: the string given to this helper function
*
* Description: counts string length
* Return: the length of the string
*/

int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
* add_node_end - adds node to the end of a linked list
* @head: the pointer to the head given to us
* @str: the string we want copied
*
* Description: addition of a new node. practicing linked lists
* Return: returns the address of the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add;
	list_t *last;

	if (!head)
		exit(98);
	last = *head;
	add = malloc(sizeof(list_t));
	if (!add)
		exit(98);
	add->str = strdup(str);
	add->len = _strlen(str);
	add->next = NULL;
	if (*head == NULL)
	{
		*head = add;
		return (*head);
	}
	while (last->next)
		last = last->next;
	last->next = add;
	return (*head);
}
