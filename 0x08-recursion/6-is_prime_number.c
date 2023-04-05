#include "main.h"

/**
* check_is_prime - shows if a number is prime or not
* @n: number to be tested
* @count: counter to 1
* Return: 1 if n is prime and 0 if not
*/
int check_is_prime(int n, int count)
{
	if (n <= 1)
		return (0);
	if (count == 1)
		return (1);
	if (n % count == 0)
		return (1);
	return (check_is_prime(n, count - 1));
}

/**
* is_prime_number - shows if a number is prime or not
* @n: number to be tested
* Return: 1 if n is prime and 0 if not
*/
int is_prime_number(int n)
{
	return (check_is_prime(n, n - 1));
}
