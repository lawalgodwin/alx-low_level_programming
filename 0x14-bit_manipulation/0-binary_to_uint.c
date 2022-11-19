#include "main.h"

/**
  * binary_to_uint - Converts binary strings to an unsigned integer
  *
  * @b: The binary string to convert
  *
  * Return: returns the convertion result
  */

unsigned int binary_to_uint(const char *b)
{
	if (!b)
		return (0);

	const char *p = b;

	unsigned int sum = 0, power = 0;

	while (*(b))
		b++;

	b--;

	while (b >= p)
	{
		if ((*b != '0') && (*b != '1'))

			return (0);

		sum += (*b - '0') * (1 << power);

		power++;

		b--;
	}

	return (sum);
}
