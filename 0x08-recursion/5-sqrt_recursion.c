#include "main.h"

/**
* _sqrt_recursion_2 - returns the natural square root of a number.
* @a: number * number
* @n: number
* Return: the natural square root of n
*/
int _sqrt_recursion_2(int a, int n)
{
	if (a * a == n)
		return (a);
	else if (a * a > n)
		return (-1);
	return (_sqrt_recursion_2(a + 1, n));
}

/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: number
* Return: the natural square root of n
*/
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_2(1, n));
}
