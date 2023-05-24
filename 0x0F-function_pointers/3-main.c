#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs simple operations
 * @argc: number of parameters
 * @argv: array of pointers
 * Return: Always 0 (Sucess)
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	char *oper;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	oper = argv[2];
	if (get_op_func(oper) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*oper == '/' && num2 == 0) || (*oper == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(oper)(num1, num2));
	return (0);
}

