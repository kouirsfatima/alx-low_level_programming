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
