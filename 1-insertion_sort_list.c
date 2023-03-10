#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: doubly linked list to sort
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node;

	if (list == NULL || (*list)->next == NULL)
		return;

	node = (*list)->next;
	while (node != NULL)
	{
		while (node->prev != NULL && (node->prev->n > node->n))
		{
			node->prev->next = node->next;
			if (node->next != NULL)
				node->next->prev = node->prev;
			node->next = node->prev;
			node->prev = node->next->prev;
			node->next->prev = node;

			if (node->prev == NULL)
				(*list) = node;
			else
				node->prev->next = node;
			print_list(*list);
		}
		node = node->next;
	}
}
