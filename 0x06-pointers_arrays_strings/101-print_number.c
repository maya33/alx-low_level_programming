#include "main.h"
/**
 * print number of integers
 *
 * all integers to be printed
 *
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);
}
