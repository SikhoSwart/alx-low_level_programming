#include <stdio.h>
/**
 * main - print numbers from 1 to 100
 *
 *Description - fizz for multiples of 3, buzz for 5, fizzbuzz for both
 *
 * Return: nothing
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
			continue;
		}
		printf("%d", i);
		printf(" ");
	}
	printf("\n");
	return (0);
}
