#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)

{

	int a, b;
	int x,y;

	a = 5;
	b=2;
	b=a;
	a=b;

	x=10;
	y=5;
	y=x+y;
	x=x*y;

	printf(" %d  %d\n ",b,a);
	printf(" %d  %d\n ",x,y);
	getchar();
	return 0;
	
}