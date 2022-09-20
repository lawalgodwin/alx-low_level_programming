#include "main.h"

/**
  * puts2 - print only char divisible by 2
  *
  * @str: The string to be filtered
  *
  * Return: returns nothing
  *
  */

void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		if ((i % 2) == 0)
			_putchar(*(str + i));
	_putchar('\n');

}
