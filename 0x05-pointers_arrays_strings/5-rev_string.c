#include "main.h"

/**
* rev_string - prints a string in reverse
* @s: string
* Return: nothing
*/
void rev_string(char *s)
{
	int i, j, len;
	char n;

	for (i = 0; s[i] != '\0'; i++)
		;
	len = i;
	j = len - 1;
	for (i = 0; i < len / 2; i++)
	{
		n = s[i];
		s[i] = s[j];
		s[j--] = n;
	}
}
