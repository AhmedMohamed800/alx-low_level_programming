#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes.
* @s: string1
* @accept: string2
* Return: num of byyes of s
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
