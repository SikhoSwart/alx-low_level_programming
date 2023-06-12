#include "main.h"
/**
 * create_file - creates a file
 * @filename: pointer to file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int len;
	int txt, wr;

	len = 0;
	if (!text_content)
	{
		return (-1);
	}
	if (!filename)
	{
		return (-1);
	}
	txt = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (txt == -1)
	{
		return (-1);
	}
	while (text_content)
	{
		len++;
	}
	wr = write(txt, text_content, len);
	if (wr == -1)
	{
		return (-1);
	}
	close(txt);
	return (1);


}
