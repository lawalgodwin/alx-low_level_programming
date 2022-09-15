#include "main.h"

/**
  * print_numbers - Prints 0 - 9 to the console
  *
  * Return: Always returns nothing
  */

void print_numbers(void)
{
	int i = 0;

	for (; i <= 9; i++)
		_putchar(i + '0');

	_putchar('\n');

}
