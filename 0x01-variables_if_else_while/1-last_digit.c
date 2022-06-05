#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * main - Entry point
  *
  * Return: Always return 0 (Success)
  */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	if (last_digit == 0)
		printf("Last digi of %i is %i and is 0\n", n, last_digit);
	if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0", n, last_digit);
		printf("\n");
	}
	if (last_digit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5", n, last_digit);
		printf("\n");
	}

	return (0);
}
