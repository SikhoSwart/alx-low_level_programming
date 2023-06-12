#include "main.h"
#include <stdio.h>
/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (SUCCESS)
 */
int main(int argc, char *argv[])
{
	int txt, txt_cp;
	ssize_t rd = 1024, wr;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	txt = open(argv[1], O_RDONLY);
	if (txt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	txt_cp = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (txt_cp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (rd == 1024)
	{
		rd = read(txt, buff, 1024);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wr = write(txt_cp, buff, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (close(txt) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", txt);
		exit(100);
	}
	if (close(txt_cp) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", txt_cp);
		exit(100);
	}
	return (0);
}
