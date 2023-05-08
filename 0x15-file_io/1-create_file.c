#include "main.h"

/**
* create_file - creates a file.
* @filename: the name of the created file
* @text_content: text to include in the file.
* Return: 1 on success
* On error, return -1
*/
int create_file(const char *filename, char *text_content)
{
	int my_file;
	size_t length = 0;

	if (filename == NULL || text_content == NULL)
		return (-1);
	my_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (my_file == -1)
		return (-1);
	while (text_content[length] != '\0')
	{
		length++;
	}
	write(my_file, text_content, length);
	close(my_file);
	return (1);
}
