#include "function_pointers.h"
#include <stdlib.h>

/**
* print_name - prints a name.
* @name: name to be printed.
* @f: function that prints a name.
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
