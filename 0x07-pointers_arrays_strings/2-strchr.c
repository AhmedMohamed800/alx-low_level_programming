#include "main.h"

/**
* _strchr - locates a character in a string.
* @s: string to search in
* @c: string to find
* Return: a pointer to s or null
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	for (*s)
	{
		if (s[i] == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
