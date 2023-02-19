#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	long int n = 0;
	printf("Please enter three integers:\n");
	int b = scanf("%*d %*d %d", &n);
	printf("The last integer was %d\n", n);
	int a = getchar();
	system("pause");
	return 0;

}