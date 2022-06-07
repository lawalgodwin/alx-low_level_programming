#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always returns 0 (Success)
  *
  */
int main(void)
{
	int lower_letter;

	int upper_letter;

	for (lower_letter = 'a'; lower_letter <= 'z'; lower_letter++)
	{
		putchar(lower_letter);
	}

	for (upper_letter = 'A'; upper_letter <= 'Z'; upper_letter++)
	{
		putchar(upper_letter);
	}

	putchar('\n');

	return (0);
}
