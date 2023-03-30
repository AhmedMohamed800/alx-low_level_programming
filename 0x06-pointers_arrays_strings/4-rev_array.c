#include "main.h"

/**
* reverse_array - reverses the content of an array of integers.
* @a: the first integer
* @n: the second integer
* Return: nothing
*/
void reverse_array(int *a, int n)
{
	int i, temp, j = n - 1;

	for (i = 0; i < n / 2; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
