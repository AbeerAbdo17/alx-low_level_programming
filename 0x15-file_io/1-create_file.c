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
	ssize_t leng = 0;
	ssize_t byteswritten = 0;

	while (text_content[leng] != '\0')
		leng++;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (leng)
		byteswritten = write(fd, text_content, leng);
	close(fd);
	if (byteswritten == leng)
		return (1);
	else
		return (-1);
}
