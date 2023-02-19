#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main (void)
{
	float g,h;
	float tax, rate;
	rate = 0.08;
	g = 1.0e5;
	tax = rate*g;
	h = g +tax;
	printf("You owe $%f plus $%f in taxes for a tatal of $%f.\n", g, tax, h);
	getchar();
	return 0;
}