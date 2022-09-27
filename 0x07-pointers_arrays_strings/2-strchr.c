/**
  * _strchr - Locate a character in a string
  *
  * @s: The string to search
  *
  * @c: The character to find
  *
  * Return: Returns the memory location of the first occurence of `c`
  */

char *_strchr(char *s, char c)
{
	int position = 0;

	for (; *(s + position); position++)
	{
		if (*(s + position) == c)

			return (s + position);
	}

	s = 0;

	return (s);
}
