#include "main.h"

/**
* str_concat - concatenates two strings.
* @s1: the first string
* @s2: the second string
* Return: a concatenated string
*/
char *str_concat(char *s1, char *s2)
{

	int s1_len = 0, s2_len = 0, i;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[s1_len])
	{
		s1_len++;
	}
	while (s2[s2_len])
	{
		s2_len++;
	}
	result = malloc(s1_len + s2_len + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < s2_len; i++)
	{
		result[s1_len + i] = s2[i];
	}
	result[s1_len + s2_len] = '\0';
	return (result);
}
