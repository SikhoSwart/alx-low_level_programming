#include "main.h"
#include <stdio.h>
/**
 * main - adds positive numbers
 * @argc: number of args
 * @argv: array of args
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, res = 0;
	char *let;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			let = argv[i];
			while (*let != 0)
			{
				if (*let < 47 || *let > 57)
				{
					printf("Error\n");
					return (1);
				}
				let++;
			}
			res = atoi(argv[i]);
			sum += res;
		}
		printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);
	return (0);
}
