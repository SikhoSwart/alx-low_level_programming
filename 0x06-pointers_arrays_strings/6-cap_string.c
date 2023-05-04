#include "main.h"
/**
 * *cap_string -  capitalizes all words of a string
 *
 * @str: pointer to string
 *
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int i, j;
	int arr[] = {9, 32, 10, 33, 59, 44, 46, 63, 34, 40, 41, 123, 125};



	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i == 0)
			{
				str[i] = str[i] - 32;
			}
			else
			{
				for (j = 0; j <= 12; j++  )
				{
					if (arr[j] == str[i - 1])
					{
						str[i] = str[i] - 32; 
					}
				}
			}
		}
	}
	return (str);
}
