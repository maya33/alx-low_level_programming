#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.c>
#include <string.h>

/**
 * _isupper - using uppercase letter
 * @c: some characters to check
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
