#include "lists.h"
#include <stdlib.h>

/**
* sum_dlistint - a function that returns the sum of all the data
* @head: the head node passed to us
*
* Return: the total amount, maxing at int. 4 bytes.
*/

int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	while (head)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
