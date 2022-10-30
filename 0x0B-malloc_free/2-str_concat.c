#include "main.h"

int _strlen(char *str);

/**
  * str_concat - Joins 2 strings & store the result in dynamic mem space
  *
  * @s1: The first string
  *
  * @s2: The second string
  *
  * Return: Returns the address of the first byte of the concatenated str
  */

char *str_concat(char *s1, char *s2)
{
	int s1_len = _strlen(s1);

	int s2_len = _strlen(s2);

	int total_str_len = s1_len + s2_len;

	int j = 0;

	char *ptr;

	s1 = malloc((total_str_len + 1) * sizeof(char));

	ptr = s1;

	if (ptr == NULL)

		return (NULL);

	while (j < s2_len)
	{
		*(s1 + s1_len++) = *(s2 + j);

		j++;
	}

	*(s1 + (total_str_len + 1)) = '\0';

	return (s1);
}

/**
  * _strlen - Get the length of a string
  *
  * @str: The string
  *
  * Return: Returns the length of the string
  *
  */

int _strlen(char *str)
{
	int i;

	if (str == NULL)

		*str = ' ';

	for (i = 0; *(str + i) != '\0'; i++)
		;

	return (i);
}
