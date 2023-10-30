#include"main.h"
/**
 * create_file -  function that creates a file
 * @filename: input
 * @text_content: input
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t leng;
	ssize_t byteswritten;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng] != '\0'; leng++)
			;
		byteswritten = write(fd, text_content, leng);
		if (byteswritten == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (-1);
}
