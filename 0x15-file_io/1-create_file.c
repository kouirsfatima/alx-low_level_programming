#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, str, ptr = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0640);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[ptr])
			ptr++;
		str = write(fd, text_content, ptr);
		if (str == -1)
		{

			return (-1);
		}
	}

	close(fd);

	return (1);
}
