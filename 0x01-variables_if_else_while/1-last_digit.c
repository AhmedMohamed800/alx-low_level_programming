#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - generate a random number
 * Return: Return 0
 */
int main(void)
{
	int n, last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_num = n % 10;
	if (last_num > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_num);
		return (0);
	}
	if (last_num == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_num);
		return (0);
	}
	if (last_num < 6 && last_num != 0)
		printf("Last digit of %d is %d ", n, last_num);
		printf("and is less than 6 and not 0\n");
	return (0);
}
