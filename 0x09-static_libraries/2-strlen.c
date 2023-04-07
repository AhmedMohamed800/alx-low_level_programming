#include "main.h"

/**
* _strlen -  returns the length of a string.
* @s: string to know it's size
* Return: nothing
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
