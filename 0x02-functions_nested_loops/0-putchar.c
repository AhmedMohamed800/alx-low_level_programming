#include <stdio.h>

/**
 * main - print _putchar as output
 * Return: Return 0
 */
int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	while (s[i])
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
