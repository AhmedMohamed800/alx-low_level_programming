#include <stdio.h>

/**
 * main - print the alpabet
 * Return: Return 0
 */
int main(void)
{
	int ch = 48;

	for (ch = 48; ch < 58; ch++)
		if (ch == 57)
		{
			putchar(ch);
		}
		else
		{
			putchar(ch);
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
