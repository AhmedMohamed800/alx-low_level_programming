#include "main.h"

/**
* _strcmp - concatenates two strings
* @s1: the first string
* @s2: the second string
* Return: (s1 < s2 - s1 > s2 - s1 = s2) less - equal - >0
*/
int _strcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
