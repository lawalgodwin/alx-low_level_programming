#include "main.h"

/**
  * print_most_numbers - Prints 0 - 9 except 2 and 4 to the console
  *
  * Return: Always returns nothing
  */

void print_most_numbers(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}

	_putchar('\n');

}
