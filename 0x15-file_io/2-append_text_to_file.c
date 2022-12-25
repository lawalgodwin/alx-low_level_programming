#include "main.h"

size_t _strlen(char *s);

/**
  * append_text_to_file - Apeend text to a file
  *
  * @filename: The file name
  *
  * @text_content: the text
  *
  * Return: 1 on success or -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, written_bytes;

	if (filename == NULL)

		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1)

		return (-1);

	if (text_content == NULL)

		text_content = "";

	written_bytes = write(fd, text_content, _strlen(text_content));

	close(fd);

	if (written_bytes == -1)

		return (-1);

	return (1);
}

/**
  * _strlen - Get the len of a string
  *
  * @s: the string
  *
  * Return: The calculated length
  */

size_t _strlen(char *s)
{
	size_t i = 0;

	for (; *(s + i); i++)
		;
	return (i);
}
