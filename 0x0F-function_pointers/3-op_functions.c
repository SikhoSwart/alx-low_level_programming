#include "3-calc.h"
/**
 * op_add - return sum of integers
 * @a: integer
 * @b: int
 * Return: sum
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}
/**
 * op_sub - returns differnce of ints
 * @a: int
 * @b: int
 * Return: difference
 */
int op_sub(int a, int b)
{
	int diff;

	diff = a - b;
	return (diff);
}
/**
 * op_mul - returns product of integers
 * @a: int
 * @b: int
 * Return: product
 */
int op_mul(int a, int b)
{
	int prod;

	prod = a * b;
	return (prod);
}
/**
 * op_div - returns quotient of integers
 * @a: int
 * @b: int
 * Return: quotient
 */
int op_div(int a, int b)
{
	int quo;

	quo = a / b;
	return (quo);
}
/**
 * op_mod - returns modulus of integers
 * @a: int
 * @b: int
 * Return: modulus
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
