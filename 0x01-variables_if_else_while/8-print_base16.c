#include <stdio.h>

/**
 * main - print the alpabet
 * Return: Return 0
 */
int main(void)
{
	char ch = '0';
	char an_ch = 'a';

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (an_ch = 'a'; an_ch <= 'f'; an_ch++)
		putchar(an_ch);
	putchar('\n');
	return (0);
}
