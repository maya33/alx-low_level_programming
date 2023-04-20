#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Write a function that searches for an integer.
 * @array: arrays being used
 * @size: The number of indexes 
 * @cmp: The pointer to a function
 *
 * Return: The index 
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*ptr)(int);

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	ptr = cmp;
	for (i = 0; i < size; i++)
	{
		if (ptr(array[i]))
			return (i);
	}

	return (-1);
}

