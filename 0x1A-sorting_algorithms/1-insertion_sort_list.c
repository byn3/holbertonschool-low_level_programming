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
		listint_t *head = *list;
		listint_t *current;
		listint_t *holder;

		if (!list || !(*list) || !(*list)->next)
			return;
		while (head)
		{
			current = head;
			while (current && current->prev)
			{
				holder = current->prev;
				if (holder->n > current->n)
				{
						(holder->prev)->next = current;
						current->prev = holder->prev;
						holder->next = current->next;
						holder->prev = current;
						current->next = holder;
						(holder->next)->prev = holder;
				}
				else
					current = current->next;
			}
			head = head->next;
		}
}

			/*
			\* just swap values. do not move any nodes. be super lazy. *\/
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
