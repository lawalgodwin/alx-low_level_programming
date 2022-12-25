#include "main.h"

/**
  * read_textfile - Read the content of a file then print to stdout
  *
  * @filename: the file
  *
  * @letters: The number of bytes to be read.It must be an unsigned int
  *
  * Return: the number of bytes printed to the screen(stdout) or -1 if error
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;

	ssize_t read_bytes = 0;

	ssize_t written_bytes = 0;

	ssize_t fd;

	if (filename == NULL)

		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)

		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fd);

		return (0);
	}

	read_bytes = read(fd, buffer, letters);

	close(fd);

	if (read_bytes == -1)
	{
		free(buffer);

		buffer = NULL;

		return (0);
	}

	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	if (written_bytes != read_bytes)
	{
		free(buffer);

		buffer = NULL;

		return (0);
	}

	free(buffer);

	buffer = NULL;

	return (written_bytes);
}
