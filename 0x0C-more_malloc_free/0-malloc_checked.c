#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - using malloc function to allocates memory
 * @b: Value passed array
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

