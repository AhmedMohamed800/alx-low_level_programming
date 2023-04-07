#include "main.h"

/**
* _strstr - locates a substring.
* @haystack: string1
* @needle: string2
* Return: null or pointer to the beginning of str1
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, x = 0;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		if (needle[x] == haystack[i])
		{
			x += 1;
		}
		if (needle[x] == '\0')
		{
			x -= 1;
			haystack -= x;
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
