#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdio.h>
#define ADJUST 7.31
int main(void)
{
	const double SCALE = 0.333;  //const±‰¡ø
	double shoe, foot;
	shoe = 9.0;
	foot = SCALE * shoe + ADJUST;
	printf("Shoe size (men's)  foot length\n");
	printf("%10.1f %15.2f inches\n", shoe, foot);
	int a = getchar ();

	system("pause");
	return 0;

}