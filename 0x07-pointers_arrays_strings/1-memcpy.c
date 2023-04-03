#include "main.h"

/**
 * _memcpy - The function memcpy() is used to copy a memory block from one location to another
 *           
 * 
 * Return: A pointer to the destination buffer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

