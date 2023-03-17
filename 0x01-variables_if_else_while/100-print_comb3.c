#include <stdio.h>

/**
 * main - print two united digits until 89
 * Return: Return (0)
 */
int main(void)
{
	int num_1 = 48, num_2 = 49;

	while (!(num_1 == 57 && num_2 == 48))
	{
		if (!(num_1 == num_2))
		{
			putchar(num_1);
			putchar(num_2);
			num_2++;
		}
		if (!(num_1 == 57 && num_2 == 48))
		{
			putchar(',');
			putchar(' ');
		}
		if (num_2 == 57)
		{
			num_1++;
			num_2 = 1;
		}

	}
	putchar('\n');
	return (0);
}
