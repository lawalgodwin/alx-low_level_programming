/**
  * _isdigit - Checks if the character is within the number set
  *
  *@c: The character to be checked
  *
  * Return: 1 if character falls with the set. Otherwise 0
  *
  */

int _isdigit(int c)
{
	int result = ((c >= '0') && (c <= '9')) ? 1 : 0;

	return (result);
}
