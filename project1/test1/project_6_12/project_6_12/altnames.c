#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <inttypes.h> //支持可移植类型
int main(void)
{
	int32_t me32;  //me32是一个32位有符号型变量
	me32 = 45933945;
	printf("First, assume int32_t is int: ");
	printf("me32 = %d\n", me32);
	printf("Next, let's not make any assumption.\n");
	printf("Instead, use a \"macro\" from inttypes.h: ");
	printf("me32 = %" PRId32 "\n", me32);
	getchar();
	return 0;
}