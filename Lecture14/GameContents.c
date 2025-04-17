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
	printf("고양이의 모험");
	ChangeTextColor(COLOR_MAGENTA);
	moveCursorToXY(50 - 6, 10);
	printf("- Version 1.0 -");

	/* 메뉴 출력 */
	ChangeTextBGColor(COLOR_WHITE);
	ChangeTextColor(COLOR_BLACK);
	moveCursorToXY(50 - 4, 12);
	printf("1. 게임시작");
	moveCursorToXY(50 - 4, 13);
	printf("2. 게임소개");
	moveCursorToXY(50 - 4, 14);
	printf("3. 그냥종료");

	InitTextStyle();
	moveCursorToXY(101, 25);
}

// 게임상태 : 게임소개(1)
void DrawIntroduction()
{
	moveCursorToXY(0, 0);
	ChangeTextBGColor(COLOR_BLUE);
	ClearScreen(100, 25);

	ChangeTextBGColor(COLOR_BLUE);
	ChangeTextColor(COLOR_WHITE);
	moveCursorToXY(30, 8);
	printf("제작자 : 이은석");
	moveCursorToXY(30, 10);
	ChangeTextColor(COLOR_WHITE);
	printf("게임소개 : 없음! 걍 고양이가 귀여운 게임임!");

	moveCursorToXY(30, 18);
	ChangeTextColor(COLOR_YELLOW);
	printf("메뉴로 돌아가려면 'B' 키를 눌러주세요!");

	InitTextStyle();
	moveCursorToXY(101, 25);
}

// 게임상태 : 게임시작(2)
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

	/*고양이 위치 초기화*/
	moveCursorToXY(x, y - 3);
	printf("           ");
	moveCursorToXY(x, y - 2);
	printf("           ");
	moveCursorToXY(x, y - 1);
	printf("           ");
	moveCursorToXY(x, y);
	printf("           ");

	/* 고양이 캐릭터 */
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

	/*고양이 위치 초기화*/
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

// 게임상태 : 게임오버(3)
void DrawGameOver()
{
	moveCursorToXY(0, 0);
	ChangeTextBGColor(COLOR_BLUE);
	ClearScreen(100, 25);

	ChangeTextBGColor(COLOR_BLUE);
	ChangeTextColor(COLOR_WHITE);
	moveCursorToXY(40, 13);
	printf("게임을 종료합니다");


	InitTextStyle();
	moveCursorToXY(101, 25);
}

void DrawFPS(double fps)
{
	moveCursorToXY(0, 0);
	printf("fps: %f", fps);
}