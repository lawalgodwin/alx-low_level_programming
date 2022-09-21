/**
  * _strcat - Concatenate 2 strings
  *
  * @dest: The destination
  * @src: The source
  *
  * Return: returns the pointer to the concatenated string
  *
  */

char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
		;

	for (; ((*(dest + i++) = *(src + j++)) != '\0'); )
		;

	*(dest + i) = '\0';

	return (dest);

}
