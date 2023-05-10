#include "main.h"
/**
 * _prime - finds prime number
 *
 * @i: integer
 * @j: integer
 *
 * Return: result
 */
int _prime(int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	else if (i % j == 0)
	{
		return (0);
	}
	return (_prime(i, j + 1));
}
/**
 * is_prime_number - finds if integer is prime
 *
 * @n: integer
 *
 * Return: 1 if prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime(n, 2));
}
