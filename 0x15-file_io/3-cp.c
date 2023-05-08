#include "main.h"

/**
* main - copy the content of a file to another file
* @argc: argument count
* @argv: array of argument values
* Return: 0
*/
int main(int argc, char **argv)
{
	int first_file, second_file, close_file;
	int read_first = 1024, write_second = 0;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	first_file = open(argv[1], O_RDONLY);
	if (first_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	second_file = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (second_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(99);
	}
	while (read_first == 1024)
	{
		read_first = read(first_file, buffer, 1024);
		if (read_first == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		write_second = write(second_file, buffer, read_first);
		if (write_second == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", argv[2]);
			exit(99);
		}
	}
	close_file = close(first_file);
	if (close_file == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", first_file), exit(100);
	close_file = close(second_file);
	if (close_file == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", second_file), exit(100);
	return (0);
}
