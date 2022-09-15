#include "main.h"

/**
  * print_sign - Checks for the sign of a number
  *
  *@n: The character to be checked
  *
  * Return: 1 if +ve or -ve. Otherwise 0
  *
  */

int print_sign(int n)
{
	if (n == 0)
		return (0);

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		return (1);
	}
	return (0);

}
