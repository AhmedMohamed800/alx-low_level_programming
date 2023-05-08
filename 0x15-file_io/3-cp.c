#include "main.h"

int copy_content(const char *file_from, const char *file_to);

/**
* main - copy the content of a file to another file
* @argc: argument count
* @argv: array of argument values
* Return: 0
*/
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to \n");
		exit(97);
	}
	copy_content(argv[1], argv[2]);
	return (0);
}

/**
* copy_content - copies the content of a file to another file.
* @file_from: the file that its content will be copied.
* @file_to: the file to which the content will be copied.
* Return: 1 in sucess
*/
int copy_content(const char *file_from, const char *file_to)
{
	int first_file, read_first, second_file;
	char buffer[1024];

	first_file = open(file_from, O_RDONLY);
	if (first_file == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	second_file = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (second_file == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_to);
		exit(99);
	}
	read_first = read(first_file, buffer, 1024);
	write(second_file, buffer, read_first);
	if (close(first_file) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", first_file);
		exit(100);
	}
	close(first_file);
	if (close(second_file) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", second_file);
		exit(100);
	}
	close(second_file);
	return (1);
}
