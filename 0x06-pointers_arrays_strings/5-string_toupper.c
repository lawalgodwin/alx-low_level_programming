/**
  * string_toupper - converts all lowercase to uppercase letters
  *
  * @s: the string to work on
  *
  * Return: returns the processed string
  */

char *string_toupper(char *s)
{
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')

			*s+=('A' - 'a');
		s++;
	}

	return (s);
}
