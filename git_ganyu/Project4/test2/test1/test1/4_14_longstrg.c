#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	printf("Here's one way to print a");
	printf("long string.\n");
	printf("Here's another way to print a \
long string.\n");
	printf("Here's the newest way to print a "
		"long string.\n");   /*ANSI C*/
	int a = getchar();
	system("pause");
	return 0;

}