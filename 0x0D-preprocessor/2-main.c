#include <stdio.h>

#include <stdlib.h>

/**
  * main - Prints the name of the file being compiled
  *
  * Return: returns 0 on success
  */

int main(void)

{
	printf("%s\n", __FILE__);

	return (EXIT_SUCCESS);
}
