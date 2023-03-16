#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - prints a string
 * Return: Return 1
 */
int main(void)
{
	char *my_string = "and that piece of art is useful\" ";
	char *ant = "- Dora Korpar, 2015-10-19\n";

	write(1, my_string, strlen(my_string));
	write(1, ant, strlen(ant));
	return (1);
}
