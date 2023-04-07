#include "main.h"

/**
* _strspn -  gets the length of a prefix substring.
* @s: string1
* @accept: string2
* Return: num of byyes of s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, x = 0;

	for (i = 0; s[i] != '\0' && s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				x++;
			}
		}
	}
	return (x);
}
