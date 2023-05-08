#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: the file that should be printed.
* @letters: the number of letters it should read and print.
* Return: the actual number of letters it could read and print.
* On error, return 0 of file is NULL
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int my_file;
	char *buffer;
	ssize_t read_file, writ;

	if (filename == NULL)
		return (0);
	my_file = open(filename, O_RDONLY);
	if (my_file == -1)
	{
		return (0);
	}
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	read_file = read(my_file, buffer, letters);
	writ = write(STDOUT_FILENO, buffer, read_file);
	close(my_file);
	return (writ);
}
