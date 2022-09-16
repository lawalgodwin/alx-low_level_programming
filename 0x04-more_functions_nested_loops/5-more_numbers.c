#include "main.h"

/**
  * more_numbers - print numbers consecutively ten times
  *
  * Return:  Always returns nothing
  */

void more_numbers(void)
{
	int i;

	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}

	_putchar('\n');

}
