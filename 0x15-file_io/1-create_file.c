#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: a file to be created
 * @text_content: Null terminated string to print to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | 0_TRUNC | 0_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	for (i = 0; text_content[i]; i++)

	if (write(fd, text_content, i) == -1)
	{
		return (-1);
	}
	if (close(fd) == -1)
		return (-1);
	return (1);
}
