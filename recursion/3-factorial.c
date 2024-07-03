#include "main.h"

/**
 * factorial - Function who returns the factorial of a given number
 * @n: Number of Factorial
 * Return: Factorial of n
 */

int factorial(int n)
{
return ((n < 0) ? -1 : (n == 0 ? 1 : n * factorial(n - 1)));
}
