#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

int main()
{
	// �ڶ�������û����ʾ�����0�������ˡ�
 //��һ�λ�ͼ�����ϵͳ�Դ��������������������صĺܿ��ܲ��У��Һ��˼�Сʱ,�ŷ�����ͼ������.
	if (SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, "E:\\�Ҿ��Ǳ�ֽ.jpeg", SPIF_SENDCHANGE | SPIF_UPDATEINIFILE))
	{
		printf("�����ɹ�!\n");
	}
	else
	{
		printf("����ʧ��\n");
	}
	return 0;
}