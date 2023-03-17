#include <stdio.h>

/**
 * main - print the alpabet in a reverse way
 * Return: Return 0
 */
int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
