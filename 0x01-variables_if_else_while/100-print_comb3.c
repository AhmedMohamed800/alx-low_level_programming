#include <stdio.h>

/**
 * main - print all possible different combinations of two digits
 * Return: Return (0)
 */
int main(void)
{
	int num_1, num_2;

	for (num_1 = 48; num_1 <= 56; num_1++)
	{
		for (num_2 = num_1 + 1; num_2 <= 57; num_2++)
		{
			putchar(num_1);
			putchar(num_2);
			if (num_1 != 56 || num_2 != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
