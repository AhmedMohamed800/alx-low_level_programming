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
	int i, nummy = 1;
	long result = 0;
	size_t j;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (!isdigit(argv[i][j]))
			{
				nummy = 0;
				break;
			}
		}
		if (nummy)
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
