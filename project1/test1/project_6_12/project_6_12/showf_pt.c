#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5; 
	float toobig = 3.4E38*100.0f;
	printf("%f can be written %e\n", aboat, aboat);
	//��һ��Ҫ�������֧��C99�����е��������
	printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
	printf("%f can be written %e\n", abet, abet);
	printf("%Lf can be written %Le\n", dip, dip);
	printf("%e\n", toobig);
	getchar();
	return 0;
}