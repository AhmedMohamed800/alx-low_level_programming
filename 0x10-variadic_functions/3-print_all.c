#include "variadic_functions.h"

/**
* print_all - that prints anything.
* @format: a list of types of arguments passed to the function;
* Return: nothing
*/
void print_all(const char * const format, ...)
{
	int i = 0, n = 0;
	char *sep = ", ", *str;

	va_list(args);
	va_start(args, format);
	while (format && format[i])
		i++;
	while (format && format[n])
	{
		if (n == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
			case 'c':
				printf("%c%s", va_arg(args, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(args, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), sep);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s%s", str, sep);
				break;
		}
		n++;
	}
	va_end(args);
	printf("\n");
}
