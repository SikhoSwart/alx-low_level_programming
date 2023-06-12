#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: pointer to textfile
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print or  NULL if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wr, txt, rd;
	char *ltrs;

	if (!filename)
	{
		return (0);
	}
	ltrs = malloc(sizeof(char) * letters);
	if (!ltrs)
	{
		return (0);
	}
	txt = open(filename, O_RDONLY);
	if (txt == -1)
	{
		return (0);
	}
	rd = read(txt, ltrs, letters);
	wr = write(STDOUT_FILENO, ltrs, rd);
	free(ltrs);
	close(txt);
	return (wr);
}
