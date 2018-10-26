#include "sort.h"
#include <stdio.h>

/**
* insertion_sort_list - uses insertion sort
* @list: the list that is sorted. a linked list.
*
* Return: nothing it is void
*/

void insertion_sort_list(listint_t **list)
{
		size_t i = 1;
		size_t j;
		listint_t *head = *list;
		listint_t *current = head;
		listint_t *holder = current->prev;

		if (!list || !(*list) || !(list->next))
			return;
		while (head)
		{
			head = head->next;
			while (current && holder && current->n > holder->n)
			{
				swap(holder, current);
				current = head;
				holder = current->prev;
				print_list(*list);
			}
		}
}

		/* LOL NOOOO i cant modify the const int n!!!
		while (temp)
		{ \* while node exista and the previous value is bigger than current *\/
			dataStorage = temp->n;
			temp->n = (temp->prev)->n;
			(temp->prev)->n = dataStorage;
			temp = temp->next;
			
			\* just swap values. do not move any nodes. be super lazy. *\/
			\* this is just like an array basically. *\/
		
		 lol rip my hard wprk im dunb
  (holder->prev)->next = current;
                current->prev = holder->prev;
                holder->next = current->next;
                holder->prev = current;
                current->next = holder;
                (holder->next)->prev = holder;

                j--;
                print_list(*list);
                if (!current->next || (current->next)->next == NULL)
                    break;
		}
		*/
