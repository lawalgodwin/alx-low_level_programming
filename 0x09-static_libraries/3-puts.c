#include "main.h"


/**
  * _puts - Print a string to stdout
  *
  * @str: The string to be printed
  *
  * Return: returns nothing
  *
  */

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		_putchar(*(str + i));

	_putchar('\n');

}