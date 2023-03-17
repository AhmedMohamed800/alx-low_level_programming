#include <stdio.h>

/**
 * main - print all possible different combinations of two digits
 * Return: Return (0)
 */
int main(void)
{
	int num_1, num_2, num_3;

	for (num_1 = 48; num_1 <= 55; num_1++)
	{
		for (num_2 = num_1 + 1; num_2 <= 56; num_2++)
		{
			for (num_3 = num_2 + 1; num_3 <= 57; num_3++)
			{
				putchar(num_1);
				putchar(num_2);
				putchar(num_3);
				if (num_1 != 55 || num_2 != 56 || num_3 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
