#include <stdarg.h>

/**
  * sum_them_all - Sums up all integers passed as args
  *
  * @n: The total number of integers to be passed
  *
  * Return: returns the sum
  *
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;

	int sum = 0;

	va_list ap;

	va_start(ap, n);

	while (i < n)
	{
		sum = sum + va_arg(ap, int);

		i++;
	}

	va_end(ap);

	return (sum);
}
