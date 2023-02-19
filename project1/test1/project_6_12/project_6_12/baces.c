#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main (void)
{
	int x = 100;
	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
	printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);
	//getchar();
	//return 0;
	system("pause");
	//return 0;
}