#include <stdio.h>

/**
 * main - print two united digits until 89
 * Return: Return (0)
 */
int main(void)
{
	int num_1 = 0, num_2 = 0;

	while (!(num_1 == 9 && num_2 == 9))
	{
		if (num_1 < num_2)
		{
			putchar(num_1 + '0');
			putchar(num_2 + '0');
		}
		if (!(num_1 == 8 && num_2 == 9))
		{
			putchar(',');
			putchar(' ');
		}
		if (num_2 == 9)
		{
			num_1++;
			num_2 = num_1 + 1;
		}
		else
		{
			num_2++;
		}

	}
	putchar('\n');
	return (0);
}
