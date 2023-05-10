#include "main.h"
/**
 * _sqrt - finds square root
 *
 * @j: integer
 * @i: integer
 *
 * Return: result
 */
int _sqrt(int j, int i)
{
	if (i * i > j)
		return (-1);
	if (i * i == j)
		return (i);
	return (_sqrt(j, i + 1));

}
/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: integer
 *
 * Return: root of number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}
