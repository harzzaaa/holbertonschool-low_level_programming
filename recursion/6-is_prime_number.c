#include "main.h"

/**
 * check_prime - Recursive helper function to check for primality.
 * @n: The number to check for primality.
 * @i: The current divisor being checked.
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int check_prime(int n, int i)
{
	if (n % i == 0)
	{
	return (0); /* n is divisible by i, so it's not a prime number */
	}
	if (n < (i * i))
	{
	return (1); /* No divisors found, n is a prime number */
	}
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to check for primality.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0); /* 0 and 1 are not prime numbers */
	}
	return (check_prime(n, 2));
}
