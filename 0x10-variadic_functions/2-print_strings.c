#include <stdio.h>

#include <stdarg.h>

/**
  * print_strings - Print all strings passed as args
  *
  * @separator: The delimiter
  *
  * @n: The number of strngs to pass
  *
  * Return: returns nothing
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	char *str;

	va_list ap;

	va_start(ap, n);

	while (i < n)
	{
		if (separator && i != 0)

			printf("%s", separator);

		str = va_arg(ap, char *);

		if (str)

			printf("%s", str);

		if (str == NULL)

			printf("(nil)");

		i++;
	}

	va_end(ap);

	printf("\n");
}
