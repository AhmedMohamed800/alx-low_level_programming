#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: the first string
* @src: the second string
* Return: a string that combains dest and src
*/
char *_strcat(char *dest, char *src)
{
	int len1 = 0, len2 = 0, i = 0;

	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0')
		len2++;

	while (len2)
	{
		dest[len1] = src[i];
		len2 -= 1;
		len1 += 1;
		i += 1;
	}
	return (dest);
}
