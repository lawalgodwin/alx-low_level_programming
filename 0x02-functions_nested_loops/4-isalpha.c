/**
  * _isalpha - Checks if the character is within the lowercase set
  *
  *@c: The character to be checked
  *
  * Return: 1 if character is an alphabet. Otherwise 0
  *
  */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);

	if (c >= 'A' && c <= 'Z')
	return (1);

	return (0);
}
