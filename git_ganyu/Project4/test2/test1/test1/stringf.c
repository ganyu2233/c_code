#define _CRT_SECURE_NO_WARNINGS 1
/*stringf.c--×Ö·û´®¸ñÊ½*/
#include <stdio.h>
#include <stdlib.h>
#define BLURB "Authentic imitation"
int main(void)
{
	printf("[%2s]\n", BLURB);
		printf("[%24s]\n", BLURB);
	printf("[%24.5s]\n", BLURB);
	printf("[%-24.5s]\n", BLURB);
	getchar();
	system("pause");
	return 0;

}