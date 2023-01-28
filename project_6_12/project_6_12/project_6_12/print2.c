#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main (void)
{
	unsigned int un = 3000000000;
	short int end = 200;
	long int big = 65537;
	long long int verybig = 12345678908642;
	//printf("\a");
	printf("un = %u and not %d\n", un, un);
	printf("end = %hd and %d\n", end, end);
	printf("big = %ld and not %hd\n", big, big);
	printf("verybig= %lld and not %ld\n", verybig, verybig);
	printf("\a");
	//printf("\a");
	//printf("\a");
	//printf("\f\n");
	printf("\v");
	getchar();
	return 0;
}