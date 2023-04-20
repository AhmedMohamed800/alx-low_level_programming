#include "variadic_functions.h"

/**
* print_strings - prints strings, followed by a new line.
* @separator: string to be printed between the strings.
* @n: number of strings passed to the function
* Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *sep, *x;
	const char *temp, *x;

	va_list(args);
	if (separator == NULL || *separator == 0)
	{
		sep = "";
	}
	else
	{
		sep = (char *) separator;
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(args, const char *);
		x = (temp != NULL) ? temp : "(nil)";
		if (i == (n - 1))
		{
			printf("%s", x);
		}
		else
		{
			printf("%s%s", x, sep);
		}
	}
	va_end(args);
	printf("\n");
}
