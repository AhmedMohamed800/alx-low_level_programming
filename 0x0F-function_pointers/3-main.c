#include "3-calc.h"
/**
* main - performs simple operations.
* @argc: number of arguments
* @argv: values
* Return: 0
*/
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	fun = get_op_func(argv[2]);
	if (fun == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = fun(a, b);
	printf("%d\n", result);
	return (0);
}
