#include "main.h"

/**
* cap_string - capitalizes all words of a string.
* @str: the string
* Return: string
*/
char *cap_string(char *str)
{
	int con = 32, i, j;
	char arr[] = {' ', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}', '\t', '\n', '\0'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - con;
			con = 0;
		}
			for (j = 0; arr[j] != '\0'; j++)
			{
				if (arr[j] == str[i])
				{
					con = 32;
					break;
				}
			}
		}
	return (str);
}
