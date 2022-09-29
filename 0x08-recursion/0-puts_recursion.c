#include "main.h"

/**
  * _puts_recursion - echo strings using recursion
  *
  * @s: The string to print
  *
  * Return: returns nothing
  */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');

		return;
	}

	_putchar(*s);

	s++;

	_puts_recursion(s);
}
