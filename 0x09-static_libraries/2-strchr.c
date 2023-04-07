#include "main.h"

/**
* _strchr - locates a character in a string.
* @s: string to search in
* @c: string to find
* Return: a pointer to s or null
*/
char *_strchr(char *s, char c)
{
	if (*s == '\0')
	{
		return (s);
	}
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}
