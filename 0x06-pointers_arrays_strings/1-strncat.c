/**
  * _strncat - Concatenate 2 strings based on number of bytes
  * @n: The number of bytes
  * @dest: The destination
  * @src: The source
  *
  * Return: returns the pointer to the concatenated string
  *
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0, k;

	for (i = 0; *(dest + i) != '\0'; i++)
		;

	for (k = 0; ((k < n) && (*(dest + i++) = *(src + j++))); k++)
		;

	*(dest + i) = '\0';

	return (dest);

}
