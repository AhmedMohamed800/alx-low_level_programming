#include "main.h"

/**
* str_concat - concatenates two strings.
* @s1: the first string
* @s2: the second string
* Return: a concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	char *concate;
	unsigned int size_1, size_2, i, j = 0, sum;

	for (size_1 = 0; s1[size_1] != '\0'; size_1++)
		;
	for (size_2 = 0; s2[size_2] != '\0'; size_1++)
		;
	sum = size_1 + size_2;
	concate = malloc(sizeof(char) * (sum + 1));
	if (concate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sum; i++)
	{
		if (i < size_1)
		{
			concate[i] = s1[i];
		}
		else
		{
			concate[i] = s2[j];
			j++;
		}
	}
	concate[sum] = '\0';
	return (concate);
}
