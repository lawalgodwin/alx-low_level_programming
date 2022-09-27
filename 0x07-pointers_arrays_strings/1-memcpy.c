/**
  * _memcpy - Copies the location of a specified area of memory in bytes
  *
  * @dest: The pointer to the destination
  *
  * @src: The source memory location
  *
  * @n: The specific area of the memory(in bytes) to be copied
  *
  * Return: returns the pointer to the `dest` memory location
  */

char *_memcpy(char *dest, char src, unsigned int n)
{
	unsigned int bytes = 0;

	for (; bytes < n; bytes++)

		*(dest + bytes) = *(src + bytes);

	return (dest);
}
