#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords
 * Return: 0 (on success)
 *
 */
int main(void)
{
	int pass, sum;

	$rand(time(NULL));
	sum = 0;
	while (sum <= 2685)
	{
		pass = (rand() % 126);
		sum += pass;
		printf("%c", pass);
	}
	printf("%c", 2772 -sum);
	
	return (0);
}

