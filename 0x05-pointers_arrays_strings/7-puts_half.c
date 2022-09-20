#include "main.h"

/**
  * puts_half - Print the last half of the string
  *
  * @str: The string to be operated on
  *
  * Return: returns nothing
  *
  */

void puts_half(char *str)
{
	int i, j = 0;

	while (*(str + j))

		j++;

	if ((j % 2) != 0)

		j = (j - 1) / 2;

	else
		j = j / 2;

	for (i = j; *(str + i) != '\0'; i++)
		_putchar(*(str + i));
	_putchar('\n');

}
