#include "main.h"
#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: number of args
 * @argv: array of args
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
