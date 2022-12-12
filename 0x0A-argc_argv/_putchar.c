#include <unistd.h>

/**
  * _putchar - Prints character to the screen
  *
  * @c: The character to be printed
  *
  * Return: returns non zero if unsuccessful
  */

int _putchar(char c)
{
	return (write(1, &c, 1));

}
