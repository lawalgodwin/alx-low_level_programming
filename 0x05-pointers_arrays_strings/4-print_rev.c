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

	for (i = 0; *(str + i) != '\0'; i++)
		;

	for (; i >= 0; --i, _putchar(*(str + i)))
		;

	_putchar('\n');

}
