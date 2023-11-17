#include "main.h"
/**
 * read_textfile -  reads a text file and prints it
 * @filename: argument
 * @letters: argument
 * Return: number of letters it could read and print or (0)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t bytes_read;
	ssize_t bytes_written;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(buffer) * letters);
	if (buffer == NULL)
		return (0);
	bytes_read = read(fd, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	close(fd);
	return (bytes_written);
}
