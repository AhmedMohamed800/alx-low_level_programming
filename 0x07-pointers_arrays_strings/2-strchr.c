#include "main.h"

/**
* _strchr - locates a character in a string.
* @s: string to search in
* @c: string to find
* Return: a pointer to s or null
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
