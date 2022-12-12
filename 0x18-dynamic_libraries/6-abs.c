#include "main.h"

/**
  * _abs - Gives the absolute value of a number
  *
  *@n: The character to be checked
  *
  * Return: +ve value of a number. Otherwise 0
  *
  */

int _abs(int n)
{
	int result;

	if (n == 0)
	{
		return (0);
	}

	if (n > 0)
	{
		result = n * 1;
		return (result);
	}

	if (n < 0)
	{
		result = n * (-1);
		return (result);
	}
	return (0);

}
