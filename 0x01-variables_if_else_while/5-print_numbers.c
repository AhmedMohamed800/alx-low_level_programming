#include <stdio.h>

/**
 * main - print the alpabet
 * Return: Return 0
 */
int main(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
