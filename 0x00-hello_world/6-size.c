#include <stdio.h>

/**
  * main - Entry point
  *
  * Description - Getting the size of Memory offerable by the host
  *
  * Return: Always return 0 (Success)
  *
  */
int main(void)
{
printf("Size of a char:%2d byte(s)\n", sizeof(char));
printf("Size of an int:%2d byte(s)\n", sizeof(int));
printf("Size of a long int:%2d byte(s)\n", sizeof(long int));
printf("Size of a long long:%2d byte(s)\n", sizeof(long long));
printf("Size of a float:%2d byte(s)\n", sizeof(float));
return (0);
}
