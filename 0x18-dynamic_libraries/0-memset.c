/**
  * _memset - Set the value of a specified area of memory in bytes
  *
  * @s: The pointer to the memory address
  *
  * @b: The value to put in the memory location
  *
  * @n: The specific area of the memory(in bytes) to be filled
  *
  * Return: returns the pointer to the filled memory location
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int bytes = 0;

	for (; bytes < n; bytes++)

		*(s + bytes) = b;

	return (s);
}
