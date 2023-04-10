#include "main.h"

/**
 * print_text_file - reads a textfile and prints it to POSIX standard output
 * @filename: The name of the file to read.
 * @max_chars: The maximum number of characters to read from the file.
 * Return: The actual number of bytes read and printed to STDOUT.
 */
ssize_t print_text_file(const char *filename, size_t max_chars)
{
	char *buffer;
	ssize_t fd, num_bytes_read, num_bytes_written, result;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * max_chars);
	if (buffer == NULL)
		return (0);
	num_bytes_read = read(fd, buffer, max_chars);
	if (num_bytes_read == -1)
	{
		free(buffer);
		return (0);
	}
	num_bytes_written = write(STDOUT_FILENO, buffer, num_bytes_read);
	if (num_bytes_written == -1)
	{
		free(buffer);
		return (0);
	}
	result = num_bytes_written;
	free(buffer);
	close(fd);
	return (result);
}
