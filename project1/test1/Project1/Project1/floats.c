#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	const double RENT = 3825.99; //const±‰¡ø
	printf("*%f*\n", RENT);
	printf("*%e*\n", RENT);
	printf("*%4.2f*\n", RENT);
	printf("*%3.1f*\n", RENT);
	printf("*%10.3f*\n", RENT);
	printf("*%10.3E*\n",RENT);
	printf("*%+4.2f*\n", RENT);
	printf("*%010.2f*\n", RENT);

	
	return 0;
}