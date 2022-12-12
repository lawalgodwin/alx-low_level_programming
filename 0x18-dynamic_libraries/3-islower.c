/**
  * _islower - Checks if the character is within the lowercase set
  *
  *@c: The character to be checked
  *
  * Return: 1 if character falls with the set. Otherwise 0
  *
  */

int _islower(int c)
{
	int result = ((c >= 96) && (c <= 122)) ? 1 : 0;

	return (result);
}
