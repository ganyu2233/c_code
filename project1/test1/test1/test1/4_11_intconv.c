#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdio.h>
#define PAGES 336
#define WORDS 65618
int main(void)
{
	short num = PAGES;
	short mnum = -PAGES;
	printf("num as short and unsigned short:  %hd %hu\n", num, num);
	printf("-num as short and unsigned short:  %hd  %hu\n",
		mnum, mnum);
	printf("num as int and char: %d %c\n", num, num);
	printf("WORDS as int, short, and char: %d %hd %c\n", WORDS,WORDS,WORDS);
	int a = getchar ();
	system("pause");
	return 0;

}