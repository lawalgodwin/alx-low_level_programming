/**
  * _puts - Print a string to stdout
  *
  * @str: The string to be printed
  *
  * Return: returns nothing
  *
  */

int _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		_putchar(*(str + i));

}
