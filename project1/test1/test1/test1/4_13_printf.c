#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>

int main(void)
{

	int bph2o = 212;
	int rv;
	rv = printf("%d F is water's boiling   point.\n", bph2o);
	printf("The printf() function printed %d characters.\n", rv);

	//getchar();

	int a = getchar();
	system ("pause");
	return 0;


}