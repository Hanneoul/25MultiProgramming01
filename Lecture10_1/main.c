#include <stdio.h>

int TitleScreen()
{
	/* Ÿ��Ʋ ȭ�� ��� */
	printf("\n\n");
	printf("\t\t*********************************\n");
	printf("\t\t*        \"������� ����\"        *\n");
	printf("\t\t*********************************\n");
	printf("\t\t         - Version 1.0 -\n\n");
	/* �޴� ��� */
	printf("\t\t          1. ���ӽ���\n");
	printf("\t\t          2. ���ӼҰ�\n");
	printf("\t\t          3. �׳�����\n\n");
}

int main()
{
	TitleScreen();

	printf("\033[5;3H �������� \033[10;3H");

	return 0;
}