#include"main.h"
int len(char *st);
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: input
 * @text_content: input
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t leng = len(text_content);
	ssize_t byteswritten = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
/**
 * len - return length
 * @st: input
 * Return: len
 */
int len(char *st)
{
	int x = 0;

	if (st == NULL)
		return (0);
	while (*st)
	{
		x++;
		st++;
	}
	return (x);
}
