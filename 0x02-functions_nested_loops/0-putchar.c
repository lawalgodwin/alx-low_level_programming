#include <stdio.h>
#include "main.h"

/**
 *  main - Entry point of the program
 *
 *  Return: Always returns 0 (Success)
 *
 */

int main(void)
{
	char str[9] = "_putchar";

	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');

	return (0);

}
