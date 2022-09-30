#include "main.h"

/**
  * main - Get the number of args passed
  *
  * @argc: Number of argument supplied
  * @argv: The array containing the arguments
  *
  * Return: 0 on success
  */

int main(int argc, char **argv __attribute__((unused)))
{
	_putchar((argc - 1) + '0');

	_putchar('\n');

	return (0);
}
