#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
* main - adds positive numbers.
* @argc: number of arguments
* @argv: list of arguments
* Return: 1 if there's no number || 0 when success
*/
int main(int argc, char *argv[])
{
	int i;
	long result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) != 0)
		{
			result += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%ld\n", result);
	return (0);
}
