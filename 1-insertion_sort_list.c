#include "sort.h"

/**
 * insertion_sort_list - sort linked list using insertion sort
 * @list: doubly linked list
 * Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *new = NULL;
	listint_t *current = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	new = *list;
	new = new->next;

	while (new)
	{
		while (new->prev && new->n < (new->prev)->n)
		{
			current = new;
			if (new->next)
				(new->next)->prev = current->prev;

			(new->prev)->next = current->next;
			new = new->prev;
			current->next = new;
			current->prev = new->prev;

			if (new->prev)
				(new->prev)->next = current;

			new->prev = current;
			if (current->prev == NULL)
				*list = current;
			print_list(*list);
			new = new->prev;
		}
		new = new->next;
	}
}
