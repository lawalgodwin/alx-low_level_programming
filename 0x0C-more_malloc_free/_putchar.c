#include <unistd.h>

/**
  * _putchar - print char to screen without buffering
  *
  * @c: the char to print
  *
  * Return: the interger value of the character printed
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
