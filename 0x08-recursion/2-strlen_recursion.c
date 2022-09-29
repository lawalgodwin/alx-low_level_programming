#include "main.h"

/**
  * _strlen_recursion - Get the length of a string
  *
  * @s: The string to work on
  *
  * Return: returns the string length
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')

		return (0);

	return (1 + _strlen_recursion(s + 1));
}
