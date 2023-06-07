#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * main -  program that prints the minimum number of coins to make change for an amount of money
 * @i: if the number of arguments passed to your program is not exactly 1
 * Return: print Error, followed by a new line, and return
 */

int coinConverter(int i)
{
	int count = 0;

	while  (a != 0)
	{
		if (a % 10 == 9 || a % 10 == 7)
			a -= 2;
		else if (a % 25 == 0)
			a -= 25;
		else if (a % 10 == 0)
			a -= 10;
		else if (a % 5 == 0)
			a -= 5;
		else if (a % 2 == 0)
		{
			if (a % 10 == 0)
				a -= 1;
			else
				a -= 2;
		}
		else
			a -= 1;
		count++;
	}
	return (count);
}


/**
 * main -  program that adds positive numbers
 * @argc: number of argument counters
 * @argv: argument vector
 * Return: 1 if a non integer is among the passed arguments
 */

int main (int argc, char *argv [])
{
	int a, coin;
	coin = 0;
	if (argc != 2)
	{	
	printf(" there is an Error in the code\n");
	return (1);
	}

	a = atoi(argv[1]);
	if (a < 0)
	printf("0\n");
	else
	{
	coin = coinConverter(a);
	printf(%d\n", coin);
	}

	return (0);
}

