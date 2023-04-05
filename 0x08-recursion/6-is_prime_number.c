#include "main.h"

int prime_checker(int n, int i);
/**
 * a function that returns 1 if the input integer is a prime number, otherwise return 0
 *@n: input number.
 *@c: iterator
 * Return: 1 if n is a prime number. 0 if n is not a prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (prime_checker(n, n / 2) > 0)
		return (1);
	return (0);
}

/**
 * is_prime _number - detects if an input number is a prime number.
 *@n: input number
 * Return: 1 if is a prime number. 0 if is not a prime number
 */

int prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime_checker(n, i - 1));
}

