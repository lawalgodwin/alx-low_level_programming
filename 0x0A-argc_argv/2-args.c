#include <stdio.h>

/**
  * main - Get all args including the program name
  *
  * @argc: Number of argument supplied
  * @argv: The array containing the arguments
  *
  * Return: 0 on success
  */

int main(int argc, char **argv)
{
	int count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);

		count ++;
	}

	return (0);
}
