#include "GameContents.h"
#include "ANSI2D.h"

void DrawTitle()
{
	moveCursorToXY(0, 0);
	ChangeTextBGColor(COLOR_BLUE);
	ClearScreen(100, 25);

	ChangeTextBGColor(COLOR_MAGENTA);
	moveCursorToXY(50 - 16, 7);
	printf("                                   \n");
	moveCursorToXY(50 - 16, 8);
	printf("  ");
	moveCursorToXY(50 + 17, 8);
	printf("  ");
	moveCursorToXY(50 - 16, 9);
	printf("                                   \n");

	ChangeTextBGColor(COLOR_BLUE);
	ChangeTextColor(COLOR_WHITE);
	moveCursorToXY(50 - 5, 8);
	printf("������� ����");
	ChangeTextColor(COLOR_MAGENTA);
	moveCursorToXY(50 - 6, 10);
	printf("- Version 1.0 -");

	/* �޴� ��� */
	ChangeTextBGColor(COLOR_WHITE);
	ChangeTextColor(COLOR_BLACK);
	moveCursorToXY(50 - 4, 12);
	printf("1. ���ӽ���");
	moveCursorToXY(50 - 4, 13);
	printf("2. ���ӼҰ�");
	moveCursorToXY(50 - 4, 14);
	printf("3. �׳�����");

	InitTextStyle();
	moveCursorToXY(101, 25);
}

// ���ӻ��� : ���ӼҰ�(1)
void DrawIntroduction()
{
	moveCursorToXY(0, 0);
	ChangeTextBGColor(COLOR_BLUE);
	ClearScreen(100, 25);

	ChangeTextBGColor(COLOR_BLUE);
	ChangeTextColor(COLOR_WHITE);
	moveCursorToXY(30, 8);
	printf("������ : ������");
	moveCursorToXY(30, 10);
	ChangeTextColor(COLOR_WHITE);
	printf("���ӼҰ� : ����! �� ����̰� �Ϳ��� ������!");

	moveCursorToXY(30, 18);
	ChangeTextColor(COLOR_YELLOW);
	printf("�޴��� ���ư����� 'B' Ű�� �����ּ���!");

	InitTextStyle();
	moveCursorToXY(101, 25);
}

// ���ӻ��� : ���ӽ���(2)
void DrawGameStart()
{
	moveCursorToXY(0, 0);
	ChangeTextBGColor(COLOR_BLUE);
	ClearScreen(100, 25);


	ChangeTextBGColor(COLOR_BLUE);
	ChangeTextColor(COLOR_WHITE);
	moveCursorToXY(0, 20);
	printf("------------------------------------------------------------");

	InitTextStyle();
	moveCursorToXY(101, 25);
}

void DrawObjectCat(int x, int y)
{
	ChangeTextBGColor(COLOR_BLUE);

	/*����� ��ġ �ʱ�ȭ*/
	moveCursorToXY(x, y - 3);
	printf("           ");
	moveCursorToXY(x, y - 2);
	printf("           ");
	moveCursorToXY(x, y - 1);
	printf("           ");
	moveCursorToXY(x, y);
	printf("           ");

	/* ����� ĳ���� */
	ChangeTextColor(COLOR_YELLOW);
	moveCursorToXY(x, y - 3);
	printf("   |\\__/|");
	moveCursorToXY(x, y - 2);
	printf("  ( o  o)");
	moveCursorToXY(x, y - 1);
	printf("  \\  ='=)");
	moveCursorToXY(x, y);
	printf(" (    .. )");

	InitTextStyle();
	moveCursorToXY(101, 25);
}

void DeleteObjectCat(int x, int y)
{
	ChangeTextBGColor(COLOR_BLUE);

	/*����� ��ġ �ʱ�ȭ*/
	moveCursorToXY(x, y - 3);
	printf("           ");
	moveCursorToXY(x, y - 2);
	printf("           ");
	moveCursorToXY(x, y - 1);
	printf("           ");
	moveCursorToXY(x, y);
	printf("           ");

	InitTextStyle();
	moveCursorToXY(101, 25);
}

// ���ӻ��� : ���ӿ���(3)
void DrawGameOver()
{
	moveCursorToXY(0, 0);
	ChangeTextBGColor(COLOR_BLUE);
	ClearScreen(100, 25);

	ChangeTextBGColor(COLOR_BLUE);
	ChangeTextColor(COLOR_WHITE);
	moveCursorToXY(40, 13);
	printf("������ �����մϴ�");


	InitTextStyle();
	moveCursorToXY(101, 25);
}

void DrawFPS(double fps)
{
	moveCursorToXY(0, 0);
	printf("fps: %f", fps);
}