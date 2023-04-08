#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
* main - adds positive numbers.
* @argc: number of arguments
* @argv: list of arguments
* Return: 1 if there's no number || 0 when success
*/
int main(int argc, char *argv[])
{
	int i, j, length;
	long result = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			length = strlen(argv[i]);
			for (j = 0; j < length; j++)
			{
				if (isdigit(*(argv[i] + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			result += atoi(argv[i]);
		}
		printf("%ld\n", result);
	}
	return (0);
}
