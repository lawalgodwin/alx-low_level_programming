#include "main.h"


/**
  * print_rev - Print a string to stdout in reverse order
  *
  * @str: The string to be printed
  *
  * Return: returns nothing
  *
  */

void print_rev(char *str)
{
	int i;

	int j;

	for (i = 0; *(str + i) != '\0'; i++)
		;

	if (i <= 0 || i <= 1)
	{
		_putchar('\n');
		return;
	}

	for (j = i; j >= 0; j--, _putchar(*(str + j)))
		;

	_putchar('\n');

}
