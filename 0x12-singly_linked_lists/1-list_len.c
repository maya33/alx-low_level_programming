#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Count the elements of a list_t list.
 * @h: Pointer 2  list.
 * Return: Number of elments.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
