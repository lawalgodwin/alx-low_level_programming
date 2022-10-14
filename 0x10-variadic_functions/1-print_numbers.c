#include <stdio.h>

#include <stdarg.h>

/**
  * print_numbers - Print all ints arguments separated by a delimeter
  *
  * @separator: The delimiter
  *
  * @n: The number of ints passed
  *
  * Return: returns nothing
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list ap;

	va_start(ap, n);

	while (i < n)
	{
		if (separator && (i != 0))

			printf("%s", separator);

		printf("%i", va_arg(ap, int));

		i++;
	}

	va_end(ap);

	printf("\n");
}
