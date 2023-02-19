//#define _CRT_SECURE_NO_WARNINGS 1

#define PRAISE "You are an extraordinary being."
#include <stdio.h>
#include <string.h>
#include <limits.h>
//#include <stdio.h>

int main(void)
{
	char name[40] = { 0 };
	printf("What's your name?");
	scanf_s("%s", name,40);
	printf("Hello, %s.%s\n", name, PRAISE);
	printf("your name of %zd letters occupies %zd memory cells.\n",
		(name), sizeof name);
	printf("The phrase of praise has %zd letters",
		strlen(PRAISE));
	printf("and occupies %zd memory cells.\n", sizeof PRAISE);
	printf("Maximum int value on this system = %d\n", INT_MAX);
	return 0;

}
