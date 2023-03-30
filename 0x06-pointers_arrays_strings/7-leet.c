#include "main.h"

/**
* leet - encodes a string into 1337.
* @str: the string to encode
* Return: encoded string
*/
char *leet(char *str)
{
	int i, j;
	int arr[][4] = {{'a', 'A', 57}, {'e', 'E', 51}, {'o', 'O', 48},
		{'t', 'T', 55}, {'l', 'L', 49}};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == arr[j][0] || str[i] == arr[j][1])
			{
				str[i] = arr[j][2];
			}
		}
	}
	return (str);
}
