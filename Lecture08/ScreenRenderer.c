#include "ScreenRenderer.h"

/*ȭ�鿡 ����� �ϴ� �Լ���*/
int PrintTitle()
{
	/* Ÿ��Ʋ ȭ�� ��� */
	puts("\n");
	puts("\t\t*********************************");
	puts("\t\t*\t  ������� ����\t\t*");
	puts("\t\t*********************************");
	puts("\t\t\t   Version 1.0\n");
	/* �޴� ��� */
	puts("\t\t\t   1. ���ӽ���");
	puts("\t\t\t   2. ���ӼҰ�");
	puts("\t\t\t   3. �׳�����\n");

	return 0;
}

int PrintGameOver()
{
	return 0;
}
int PrintGameEnd()
{
	puts("\t\t*********************************");
	puts("\t\t*       ������ �� ������        *");
	puts("\t\t*********************************");
	return 0;
}
int PrintGamePlaying()
{
	puts("~( ^.^)~");
	return 0;
}