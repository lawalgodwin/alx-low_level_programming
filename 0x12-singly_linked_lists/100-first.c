#include <stdio.h>

/**
  * executefirst - This fuction must execute first before the main function
  *
  */

void __attribute__((constructor)) executefirst(void)
{
	printf("You're beat! and yet, you must allow,\n");

	printf("I bore my house upon my back!\n");
}

