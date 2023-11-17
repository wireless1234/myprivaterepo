#include "main.h"
/**
 * append_text_to_file - append to file
 *
 * @filename: argument
 * @text_content: argument
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, fd;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
	{
		i++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	write(fd, text_content, i);
	return (1);
}
