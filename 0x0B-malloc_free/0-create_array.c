#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * function that creates an array of chars, and initializes it with a specific char
 * @buffer: memory waiting to be allocated
 * @size: the size of the memory allocation
 * Return: 0
 */
char *create_array(unsigned int size, char c);
{
	char *str;
	unsigned int i;
	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (null);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);

