/**
 * _putchar - prints "_putchar to the terminal"
 *
 * Return: Always returns nothing
 *
 */

void _putchar(void)
{
	char str[9] = "_putchar";

	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);

		i++;
	}

	putchar('\n');

}
