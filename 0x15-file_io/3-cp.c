#include"main.h"

#define PERM (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - program that copies the content of a file to another file
 * @argv: input
 * @argc: input
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int from = 0, to = 0;
	ssize_t bytes;
	char buffer[BUFF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, PERM);
	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((bytes = read(from, buffer, BUFF_SIZE)) > 0)
	{
		if (write(to, buffer, bytes) != bytes)
			dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	from = close(from);
	to = close(to);
	if (from)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);
	if (to)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100);
	return (0);
}
