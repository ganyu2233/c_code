#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void AGES (void);//������ת��������//
void jolly(void);
void deny(void);
void br();//��ӡһ�Ρ�Brazil�� Brazil��//
void ic();//��ӡһ�Ρ�India�� China��//
void toes_1();//����һ�����ͱ���//
void smile();
void one_three();
void two();



int main(void)
{
	
	printf("  �ο��\n");
	printf("  ��\n");
	printf("  ���\n");
	printf("  �ο��\n");
	printf("  ������\n");
	printf("  My name is kokomi, and my family lives in Hengyang County\n");
	
	AGES();
	jolly();
	jolly();
	jolly();
	deny();
	br();
	printf(",");
	ic(); 
	printf("\n");
	ic();
	printf(",\n");
	br();
	printf(",\n");

	toes_1();
	smile();
	smile();
	smile();
	printf("\n");
	smile();
	smile();
	printf("\n");
	smile();
	printf("\n");

	printf(" starting now:\n ");
	one_three();

	two();
	printf(" done\n ");

	getchar();
	return 0;
}

void one_three(void)
{
	printf("one\n");
}
void two(void)
{
	printf(" two \n three\n");

}
void toes_1(void)
{
	int toes;
	int a,b;

	toes = 10;

	a=toes*2;
	b=toes*toes;

	
	printf("toes=%d  \n  twice as much=%d\n  square=%d\n",toes,a,b);

}
void smile(void)
{
	printf("Smile!");
}

void br(void)
{
	printf("Brazil�� Brazil");
}
void ic(void)
{

	printf("India�� China");
}


void AGES (void)
{
	int Age ,Days;   //������ת��������//
	Age = 24;
	Days = Age*356;
	printf(" My age is %d and I have spent %d days.\n ", Age,Days );
}

void jolly(void)
{
	printf(" For he's a jollly good fellow!\n ");
}
void deny(void)
{
	printf(" Which nobody can deny\n ");
}
