#include <stdio.h>

/**
 * main - print the alpabet
 * Return: Return 0
 */
int main(void)
{
	int ch = 48;

	for (ch = 48; ch < 58; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
