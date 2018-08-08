#include "lists.h"

/**
* free_listint_safe - frees a list
* @h: the pointer to a pointer of head
*
* Description: does stuff. i didnt get this right
* Return: the size of the list
*/

size_t free_listint_safe(listint_t **h)
{
	if (!(*h))
		return (0);
	*h = NULL;
	return (0);
	
}
