#include "main.h"

/**
  * _strdup - Duplicate a string and store it in a dynamic memory
  *
  * @str: The string to be duplicated
  *
  * Return: Returns the address of the first byte of the string
  *
  */

char *_strdup(char *str)
{
	char *ptr;

	int i, j = 0;

	if (str == NULL)

		return (NULL);

	for (i = 0; *(str + i); i++)
		;

	ptr = malloc((i + 1) * sizeof(char));

	if (ptr == NULL)

		return (NULL);

	while (j < i)
	{
		*(ptr + j) = *(str + j);

		j++;
	}

	*(ptr + j) = '\0';

	return (ptr);
}
