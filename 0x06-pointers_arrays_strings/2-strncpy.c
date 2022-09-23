/**
  * _strncpy - Copy strings based on number of bytes
  * @n: The number of bytes
  * @dest: The destination
  * @src: The source
  *
  * Return: returns the pointer to the copy
  *
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((*(dest++) = *(src++)) && (i < n))
		i++;

	while (i < n)
	{
		*(dest++) = '\0';

		i++;
	}

	return (dest);
}
