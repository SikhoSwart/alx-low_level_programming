#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
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
	txt = open(filename, O_WRONLY | O_APPEND);
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
