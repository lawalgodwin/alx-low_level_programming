/**
  * _isupper - Checks if the character is within the uppercase set
  *
  *@c: The character to be checked
  *
  * Return: 1 if character falls with the set. Otherwise 0
  *
  */

int _isupper(int c)
{
	int result = ((c >= 'A') && (c <= 'Z')) ? 1 : 0;

	return (result);
}
