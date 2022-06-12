#include "sort.h"
/**
 * insertion_sort_list - insertion sort doubly linked list
 * @list: list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = *list;

	if (list == NULL)
		return;
	while(tmp != NULL)
	{
		while(tmp->prev != NULL || tmp->n > tmp->prev->n)
		{
		}
		tmp = tmp->next;
	}
}
