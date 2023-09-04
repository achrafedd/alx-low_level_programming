#include "main.h"

/**
 * append_text_to_file - append text to a file
 *
 * @filename: filename
 * @text_content: text to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, txt;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (text_content != NULL)
		txt = write(fd, text_content, strlen(text_content));

	if (fd == -1 || txt == -1)
		return (-1);

	close(fd);
	return (1);
}
