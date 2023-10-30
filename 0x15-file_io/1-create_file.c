#include "main.h"

/**
 * create_file - Used to create/make a file.
 * @filename: Pointer to the name of the file to be made/created
 * @text_content: Pointer to string to write to file made
 *
 * Return: Function fails - -1, otherwise (-1)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, length);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}

