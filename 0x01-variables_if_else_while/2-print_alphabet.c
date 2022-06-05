#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always returns 0 (Success)
  *
  */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
