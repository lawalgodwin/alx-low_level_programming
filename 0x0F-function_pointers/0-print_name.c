/**
  * print_name - The fuction that takes a fuction pointer as arg
  *
  * @f: The fuction pointer
  * @name: The arg to be used by `f`
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
