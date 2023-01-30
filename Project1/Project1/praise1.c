#define _CRT_SECURE_NO_WARNINGS 1

#define PRAISE "You are an extraordinary being."
#include <stdio.h>
//#include <stdio.h>

int main(void)
{
	char name[40];
	printf("What's your name?");
	scanf("%s", name);
	printf("Hello, %s.%s\n", name, PRAISE);
	return 0;

}
