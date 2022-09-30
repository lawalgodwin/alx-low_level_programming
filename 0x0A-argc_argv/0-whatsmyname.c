#include "main.h"

/**
  * main - Get the program name
  *
  * @argc: Number of argument supplied
  * @argv: The array containing the arguments
  *
  * Return: 0 on success
  */

int main(int argc __attribute__((unused)), char **argv)
{
	char *prog_name = argv[0];

	int i = 0;

	while (*(prog_name + i) != '\0')
	{
		_putchar(*(prog_name + i));

		i++;
	}

	_putchar('\n');

	return (0);
}
