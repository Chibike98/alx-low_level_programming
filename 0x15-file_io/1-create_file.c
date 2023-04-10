#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: Success(1) or fail(-1)
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (filename == NULL)
		return (-1);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		ssize_t w = write(fd, text_content, strlen(text_content));

		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
