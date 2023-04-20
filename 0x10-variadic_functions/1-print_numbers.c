#include "variadic_functions.h"

/**
* print_numbers - prints numbers
* @separator: string to be printed between numbers
* @n: number of arguments
* Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *separ;
	unsigned int i;

	va_list(args);
	if (separator == NULL || *separator == 0)
	{
		separ = "";
	}
	else
	{
		separ = (char *) separator;
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", va_arg(args, const unsigned int));
		}
		else
		{
			printf("%d%s", va_arg(args, const unsigned int), separ);
		}
	}
	va_end(args);
	printf("\n");
}
