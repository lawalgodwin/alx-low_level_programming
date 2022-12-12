/**
  * _strlen - Get the string length
  *
  * @str: The string to be counted
  *
  * Return: returns the no. of cahracters in the string
  *
  */

int _strlen(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		;
	return (i);

}
