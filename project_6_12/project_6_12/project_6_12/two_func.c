#define _CRT_SECURE_NO_WARNINGS 1

// /*two_func.c -- 一个文件中包含两个函数*/

#include <stdio.h>

void butler(void); /*ANSI/ISO C函数原型*/

int main (void)
{
	printf (" Iwill summon the butter function. \n ");
	butler();
	printf ("Yes. Bring me some tea and writeable DVDs. \n ");

	getchar();
	return 0;
	//system (" pause ");  /* 结束时暂停 */


}

void butler(void ) /*函数定义开始*/
{

	printf("You rang, sir? \n ");
}