#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always returns 0 (Success)
  *
  */
int main(void)
{
	unsigned int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');

		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
