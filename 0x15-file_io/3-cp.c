#include "main.h"
#include <stdio.h>
/**
 * check_file- checks if files can be opened.
 * @fd_from: file_from.
 * @fd_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
int check_file(int fd_from, int fd_to, char *argv[])
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	return (0);
}
/**
 * main - check the code for ALX students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	int fb, nm;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	umask(0000);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	check_file(fd_from, fd_to, argv);
	buf = malloc(sizeof(char) * 1024 + 1);
	if (buf == NULL)
		return (0);
	fb = 1024;
	while (fb != 0)
	{
		fb = read(fd_from, buf, 1024);
		if (fb == -1)
			check_file(-1, 0, argv);

		nm = write(fd_to, buf, fb);
		if (nm != fb)
		check_file(0, -1, argv);
	}
	free(buf);
	if (close(fd_from) == -1 )
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
