#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: content to be appended
 *
 * Return: 1 if successful, -1 if the file does not exist or if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nletters, rwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fd, text_content, nletters);
		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
