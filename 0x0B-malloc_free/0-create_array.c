#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * function that creates an array of chars, and initializes it with a specific char
 * @buffer: memory waiting to be allocated
 * @size: the size of the memory allocation
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
  unsigned int i;

  if (size == 0)
      return (NULL);

  char *s = (char*)malloc(size * sizeof(char));

  for (i = 0; i < size; i++)
    s[i] = c;

  return (s);
}

