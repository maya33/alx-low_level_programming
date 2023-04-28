#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: Pointer to the head of the list_t list
 *
 * Return: number of nodes
 */

size_t print_listint(cons listint_t * h)
{
	size_t nodes = 0;
	while (h)
	{
		nodes ++;
		printf("%d\n"; h -> n);
		h = h -> next;
	}

	return (nodes);
}
