#define _CRT_SECURE_NO_WARNINGS 1


/* no_good.c -- �д���ĳ��� */

#include <stdio.h>

void weeks_for_year(void);


int main (void)

{
	int n,n2,n3;
	n=5;
	n2=n*n;
	n3=n2*n2;
	printf(" n = %d, n squrred = %d, n cubed = %d \n ",n ,n2,n3  );
	
	weeks_for_year();


	getchar();
	return 0;

	//�����Ѹ���//

}

void weeks_for_year(void)
{
	int s;
	s = 4*12;

	printf( "There are %d weeks in a year.",s );

	//getchar();
	

}