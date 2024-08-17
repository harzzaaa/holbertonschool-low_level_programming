#include "main.h"

/**
 * append_text_to_file - Function who append text at the end of file
 *
 * @filename: file name
 *
 * @text_content: null string at end file
 *
 * Return: 1 or -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, write_status;

	if (filename == NULL)

		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
		len++;

		write_status = write(fd, text_content, len);
		if (write_status == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
