#include "main.h"
/**
 * read_textfile - reads a textfile and prints it to POSIX standard output.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *buf = malloc(sizeof(char) * letters);
	ssize_t t = read(fd, buf, letters);
	ssize_t w = write(STDOUT_FILENO, buf, t);

	if (fd == -1)
		return (0);
	free(buf);
	close(fd);
	return (w);
}
