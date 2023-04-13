#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* string_nconcat - concatenates two strings.
* @s1: first string
* @s2: second string
* @n: bytes of s2 to concate
* Return: pointer shall point to a newly allocated space in memory.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int len1, len2, sum, i, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (n >= len2)
	{
		n = len2;
	}
	sum = n + len1;
	new_string = malloc(sum + 1);
	for (i = 0; i < sum; i++)
	{
		if (i < len1)
		{
			new_string[i] = s1[i];
		} else
		{
			new_string[i] = s2[j];
			j++;
		}
	}
	new_string[sum] = '\0';
	return (new_string);
}
