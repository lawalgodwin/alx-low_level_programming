#include <stdlib.h>

/**
  * string_nconcat - Concatenate 2 strings and store the result in memory
  *
  * @s1: the first string
  *
  * @s2: the second string
  *
  * @n: the number of bytes from `s2`
  *
  * Return: returns the pointer to `s1` that contains the result
  *
  */


char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int i;

	unsigned int s1len;

	unsigned int s2len;

	unsigned int totallen;

	if (*s1 == NULL)

		*s1 = "";

	if (*s2 == NULL)

		*s2 = "";

	totallen = sizeof *s1 + sizeof *s2;

	s1 = malloc(sizeof *s1 * totallen);

	if (s1 == NULL)

		return (NULL);

	s1len = sizeof *s1;

	if (sizeof *s1 <= n)

		s2len == n;

	s2len = sizeof *s2;

	return (s1);
}
