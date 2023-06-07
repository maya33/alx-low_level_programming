#include "main.h"

/**
 * _print_rev_recursion - printing a string in a reverse way.
 * @s: string 
 * Return: no return
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	else
		return;
	_putchar(*s);
}

