#include "lists.h"

/**
* print_listint_safe - prints a list but safely
* @head: the head node. pointer
*
* Description: dont wanna print a infinite loop
*	either match addresses or free the head so cant loop back
* Return: the count number
*/

size_t print_listint_safe(const listint_t *head)
{
	int count = 0;

	if (!head)
		exit(98);
	return (count);
}
