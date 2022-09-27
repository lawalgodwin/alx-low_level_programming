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

		while (*s)
		{
			if (*s == c)

				return (s);

			else if (*(s + 1) == c)

				return (s + 1);

			s++;
		}

		return (s + 1);

}
