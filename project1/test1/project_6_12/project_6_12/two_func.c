#define _CRT_SECURE_NO_WARNINGS 1

// /*two_func.c -- һ���ļ��а�����������*/

#include <stdio.h>

void butler(void); /*ANSI/ISO C����ԭ��*/

int main (void)
{
	printf (" Iwill summon the butter function. \n ");
	butler();
	printf ("Yes. Bring me some tea and writeable DVDs. \n ");

	getchar();
	return 0;
	//system (" pause ");  /* ����ʱ��ͣ */


}

void butler(void ) /*�������忪ʼ*/
{

	printf("You rang, sir? \n ");
}