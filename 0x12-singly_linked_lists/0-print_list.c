#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;

	unsigned int index;

	tmp = h;

	for (index = 0; tmp; index++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);

		tmp = tmp->next;
	}
	return (index);
}
