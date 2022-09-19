/**
  * swap_int - Swaps two integers
  *
  * @a: the first interger
  * @b: the second integer
  *
  * Return: returns nothing
  */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;

	*b = tmp;

}
