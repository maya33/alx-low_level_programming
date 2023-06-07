#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - This function prints out all contents in the array
 * @array: The array being passed in
 * @size: The size of the array.
 * @action: The pointer to a function
 *
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* Unsigned int, because size_t can never be negative */
	unsigned int i;
	void (*ptr)(int);

	if (size <= 0)
		return;

	if (array == NULL || action == NULL)
		return;

	ptr = action;
	for (i = 0; i < size; i++)
		ptr(array[i]);
}

