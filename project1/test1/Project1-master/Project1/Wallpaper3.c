#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

int main()
{
	// 第二个参数没有提示，填个0，就行了。
 //第一次换图最好拿系统自带的桌面来换，网上下载的很可能不行，我耗了几小时,才发现是图的问题.
	if (SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, "E:\\我就是壁纸.jpeg", SPIF_SENDCHANGE | SPIF_UPDATEINIFILE))
	{
		printf("更换成功!\n");
	}
	else
	{
		printf("更换失败\n");
	}
	return 0;
}