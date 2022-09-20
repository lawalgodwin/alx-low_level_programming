/**
  * _strcpy - Get the string copied
  *
  * @src: The string source
  * @dest: The string destination
  * Return: returns the pointer to the copy
  *
  */

char _strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);

	*(dest + i) = '\n';

	return (dest);

}
