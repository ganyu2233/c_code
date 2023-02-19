#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	printf("Type int has a size of %lu byte.\n",sizeof(int));
	printf("Type char has a size of %lu byte.\n",
		sizeof(char));
	printf("Type long has a size of %lu byte.\n",
		sizeof(long));
	printf("Type long long has a size of %lu byte.\n",
		sizeof(long long));
	printf("Type double has a size of %lu byte.\n",
		sizeof(double));
	printf("Type long double has a size of %lu byte.\n",
		sizeof(long double));
	getchar();
	return 0;
}
/*string string string string string*/