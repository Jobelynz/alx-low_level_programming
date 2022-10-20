#include "lists.h"
/**
 * list_len -a function that returns the number of elements
 * in a linked list_t list.t
 * @h: pointer to the start of the list
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	const list_t *tmp;

	unsigned int index;

	tmp = h;

	for (index = 0; tmp; index++)
		tmp = tmp->next;

	return (index);
}
