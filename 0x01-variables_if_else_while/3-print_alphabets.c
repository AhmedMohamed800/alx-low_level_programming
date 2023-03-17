#include <stdio.h>

/**
 * main - print the alpabet
 * Return: Return 0
 */
int main(void)
{
	char ch = 'a';
	char capital = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (capital = 'A'; capital <= 'Z'; capital++)
		putchar(capital);
	putchar('\n');
	return (0);
}
