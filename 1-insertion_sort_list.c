#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *insertion_sort_list - ins sort algoritm
 *@list: double linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;

	current = (*list)->next;

	while (current)
	{
		tmp = current->next;
		while (current->prev && current->n < current->prev->n)
		{
			current->prev->next = current->next;
			if (current->next)
			{
				current->next->prev = current->prev;
			}
			current->next = current->prev;
			current->prev = current->prev->prev;
			current->next->prev = current;
		if (current->prev == NULL)
			(*list) = current;
		else
			current->prev->next = current;
		print_list(*list);
		}
		current = tmp;
	}
}
