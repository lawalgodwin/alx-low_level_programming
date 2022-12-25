#include "main.h"

size_t _strlen(char *s);

/**
  * create_file - Create a file and write content to it
  *
  * @filename: The file
  *
  * @text_content: The content
  *
  * Return: 1 on success or -1 otherwise
  */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd, written_bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 00600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)

		text_content = "";
	else
	{
		written_bytes = write(fd, text_content, _strlen(text_content) + 1);

		close(fd);

		if (written_bytes == -1)
			return (-1);
	}

	return (1);
}

/**
  * _strlen - Get the len of a content
  *
  * @s: The content
  *
  * Return: The len
  */
size_t _strlen(char *s)
{
	size_t i = 0;

	while (*(s + i))
		i++;
	return (i);
}
