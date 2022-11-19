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

	int j = 0, k = 0;

	char *ptr;

	ptr = malloc((total_str_len + 1) * sizeof(char));

	if (ptr == NULL)

		return (NULL);

	while (j < total_str_len)
	{
		if (j < s1_len)
		{
			*(ptr + j) = *(s1 + j);
		}

		else
		{
			*(ptr + j) = *(s2 + k);

			k++;
		}

		j++;
	}

	*(ptr + j) = '\0';

	return (ptr);
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

		str = "";

	for (i = 0; *(str + i) != '\0'; i++)
		;

	return (i);
}