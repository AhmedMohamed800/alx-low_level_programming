#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: pointer to string
* Return: pointer
*/
char *_strdup(char *str)
{
	char *stringy;
	unsigned int size, i;

	for (size = 0; str[size] != '\0'; size++)
		;
	stringy = malloc(sizeof(char) * size + 1);
	if (str == NULL || stringy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		stringy[i] = str[i];
	}
	return (stringy);

}
