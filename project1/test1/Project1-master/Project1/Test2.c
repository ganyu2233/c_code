#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void menu()
{
	printf("----------------------\n");
	printf("|      1.樱花        |\n");
	printf("|      2.精美        |\n");
	printf("|      3.风景        |\n");
	printf("|      4.循环        |\n");
	printf("----------------------\n");
}

int main()
{

	int choice = 0;
	int count = 10;

	menu();
	printf("请输入选项:");
	int a = scanf("%d", &choice);

	switch (choice)
	{
	case 1:
		SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, "C:\\Users\\xiaobai\\Pictures\\Saved Pictures\\1.jpg", SPIF_SENDCHANGE | SPIF_UPDATEINIFILE);
		break;
	case 2:
		SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, "C:\\Users\\xiaobai\\Pictures\\Saved Pictures\\2.jpg", SPIF_SENDCHANGE | SPIF_UPDATEINIFILE);
		break;
	case 3:
		SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, "C:\\Users\\xiaobai\\Pictures\\Saved Pictures\\3.jpg", SPIF_SENDCHANGE | SPIF_UPDATEINIFILE);
		break;
	case 4:
		while (count)
		{
			SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, "C:\\Users\\xiaobai\\Pictures\\Saved Pictures\\1.jpg", SPIF_SENDCHANGE | SPIF_UPDATEINIFILE);
			Sleep(2000);
			SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, "C:\\Users\\xiaobai\\Pictures\\Saved Pictures\\2.jpg", SPIF_SENDCHANGE | SPIF_UPDATEINIFILE);
			Sleep(2000);
			SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, "C:\\Users\\xiaobai\\Pictures\\Saved Pictures\\3.jpg", SPIF_SENDCHANGE | SPIF_UPDATEINIFILE);
			Sleep(2000);
			count--;
		}
		break;
	}
	return 0;
}