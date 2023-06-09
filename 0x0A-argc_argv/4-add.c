#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "mainn.h"

/**
 * main - a program that adds positive numbers
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 

int main(int argc, char *argv[])
{
	int i, j, length, sum;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			length = strlen(ptr);

			for (j = 0; j < length; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}

	printf("%d\n", sum);
	}
	return (0);
}
