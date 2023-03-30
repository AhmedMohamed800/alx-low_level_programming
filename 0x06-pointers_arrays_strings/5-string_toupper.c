#include "main.h"

/**
* string_toupper - changes all lowercase letters to uppercase
* @str: the first integer
* Return: nothing
*/
char *string_toupper(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
		len += 1;
	for (i = 0; i < len; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}
	return (str);
}
