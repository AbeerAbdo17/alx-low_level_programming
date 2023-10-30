#include"main.h"

/**
 * main - program that copies the content of a file to another file
 * @argv: input
 * @argc: input
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int from, to;
	ssize_t bytes;
	char buffer[BUFF_SIZE];

	if (argc != 3)
		dprintf("Usage: %s file_from file_to\n", argv[0]), exit(97);
	from = open(argv[1], O_RDONLY);
	if (from == -1)
		dprintf("Error: Can't read from file %s\n", argv[1]), exit(98);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
		dprintf("Error: Can't write to file %s\n", argv[2]), exit(99);
	while ((bytes = read(from, buffer, BUFF_SIZE)) > 0)
	{
		if (write(to, buffer, bytes) != bytes)
			dprintf("Error: Can't write to file %s\n", argv[2]), exit(99);
	}
	if (bytes == -1)
		dprintf("Error: Can't read from file %s\n", argv[1]), exit(98);
	if (close(from) == -1)
		dprintf("Error: Can't close fd %d\n", from), exit(100);
	if (close(to) == -1)
		dprintf("Error: Can't close fd %d\n", to), exit(100);
	return (0);
}
