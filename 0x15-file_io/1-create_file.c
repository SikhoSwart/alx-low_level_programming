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
	int txt;

	len = 0;
	if (!text_content)
	{
		text_content = "";
	}
	if (!filename)
	{
		return (-1);
	}
	txt = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (txt == -1)
	{
		return (-1);
	}
	while (text_content[len] != '\0')
	{
		len++;
	}
	write(txt, text_content, len);
	close(txt);
	return (1);


}
