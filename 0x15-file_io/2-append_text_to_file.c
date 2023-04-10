#include "main.h"
/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: A pointer to the name of the file.
 * @text: The text to append to the file.
 * Return: fail(-1) or success(0)
 */
int append_text_to_file(const char *filename, char *text)
{
	FILE *file;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);
	if (text != NULL)
		fputs(text, file);
	fclose(file);
	return (0);
}
