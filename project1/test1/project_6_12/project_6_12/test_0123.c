#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void platinum(void);

/*platinum.c --your weight in platinum*/
int main(void)
{
	platinum();

	getchar();
	getchar();
	return 0;
}
void platinum(void)
{
	float weight;
	float value;
	printf("Are you worth weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");
	scanf("%f", &weight);
	value = 1700.0*weight*14.5833;
	printf("\nYour weight in platinum is worth $%.2f.\n",value);
	printf("You are easily worth that! If platinum prices drop,\n");
	printf("rat more to maintain your value.\n");
	
}