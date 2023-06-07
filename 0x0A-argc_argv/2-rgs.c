#include <stdio.h>

/**
 * main - All arguments should be printed, including the first one
 * @argc: number of arguments counter
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", *(argv + x));
	}
	return (0);
}
