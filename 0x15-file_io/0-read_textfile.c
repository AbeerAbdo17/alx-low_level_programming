#include"main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 *
 * @filename: input
 * @letters: input
 *
 * Return: number of letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytesread, byteswritten;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = (char *)malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytesread = read(fd, buffer, letters);
	if (bytesread == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	byteswritten = write(STDOUT_FILENO, buffer, bytesread);
	close(fd);
	free(buffer);
	if (byteswritten != bytesread)
		return (0);
	return (bytesread);

}
