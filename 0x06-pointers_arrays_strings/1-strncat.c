#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: the first string
* @src: the second string
* @n: bytes from src
* Return: a string that combains dest and src
*/
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, len2 = 0, i = 0, byt = n;

	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0')
		len2++;
	if (len2 <= n)
	{
		while (len2)
		{
			dest[len1] = src[i];
			len2 -= 1;
			len1 += 1;
			i += 1;
		}
	}
	else
	{
		while (len2 && byt)
		{
			dest[len1] = src[i];
			len2 -= 1;
			len1 -= 1;
			i += 1;
			byt -= 1;
		}
	}
	return (dest);
}
