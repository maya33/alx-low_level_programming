#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - This function prints a name using function pointers
 * @name: output as a string
 * @f: pointer as a function
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);

	if (name == NULL || f == NULL)
		return;

	ptr = f;
	ptr(name);
}

