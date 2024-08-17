#include "main.h"

/**
 * create_file - Function who creates a file
 *
 * @filename: name of file
 *
 * @text_content: String to Write the file
 *
 * Return: 1 or -1
*/

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, write_status;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		write_status = write(fd, text_content, len);
		if (write_status == -1 || write_status != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
