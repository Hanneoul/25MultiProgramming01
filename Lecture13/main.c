#include "ANSI2D.h"
#include <stdio.h>
#include <conio.h>

#define GAMESTATE_QUIT -1
#define GAMESTATE_TITLE 0
#define GAMESTATE_INTRO 1
#define GAMESTATE_GAMESTART 2
#define GAMESTATE_GAMEOVER 3

// getch()
// 
// int a;
// scanf("%i", &a);


//고양이에 관련된 전역변수
int x = 0;


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

void DrawObjectCat()
{
	ChangeTextBGColor(COLOR_BLUE);

	/*고양이 위치 초기화*/
	moveCursorToXY(x, 16);
	printf("           ");
	moveCursorToXY(x, 17);
	printf("           ");
	moveCursorToXY(x, 18);
	printf("           ");
	moveCursorToXY(x, 19);
	printf("           ");

	/* 고양이 캐릭터 */
	ChangeTextColor(COLOR_YELLOW);
	moveCursorToXY(x, 16);
	printf("   |\\__/|");
	moveCursorToXY(x, 17);
	printf("  ( o  o)");
	moveCursorToXY(x, 18);
	printf("  \\  ='=)");
	moveCursorToXY(x, 19);
	printf(" (    .. )");

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

int Update(char input, int gs)
{
	int gs_result = gs;

	if (gs == GAMESTATE_TITLE)
	{
		if (input == '1')
		{
			gs_result = 2;
		}
		else if (input == '2')
		{
			gs_result = 1;
		}
		else if (input == '3')
		{ 
			gs_result = 3;
		}
		else if (input == 27)	//esc키
		{
			gs_result = -1;
		}
	}
	else if (gs == GAMESTATE_INTRO)
	{
		if (input == 'b' || input == 'B')	
		{
			gs_result = 0;
		}
	}
	else if (gs == GAMESTATE_GAMEOVER)
	{
		gs_result = -1;
	}
	else if (gs == GAMESTATE_GAMESTART)
	{
		if (input == 'a' || input == 'A')
		{
			x = x - 1;
			if (x < 0)
			{
				x = 0;
			}
		}
		else if (input == 'd' || input == 'D')
		{
			x = x + 1;
			if (x > 70)
			{
				x = 70;
			}
		}
		else if (input == 27)
		{
			gs_result = 0;
		}
	}

	return gs_result;
}

void Render(int gs, int prev_gs)
{
	if (gs == GAMESTATE_TITLE)
	{
		DrawTitle();
	}
	else if (gs == GAMESTATE_INTRO)
	{
		DrawIntroduction();
	}
	else if (gs == GAMESTATE_GAMESTART)
	{
		if (prev_gs != GAMESTATE_GAMESTART)
		{
			DrawGameStart();
			DrawObjectCat();
		}
		else
		{
			DrawObjectCat();
		}
	}
	else if (gs == GAMESTATE_GAMEOVER)
	{
		DrawGameOver();
	}
}

int main()
{
	int gamestate = GAMESTATE_TITLE;
	int prev_gamestate = GAMESTATE_TITLE;
	char input = 0;

	Render(gamestate, prev_gamestate);

	while (gamestate != -1)		// 27 : ESC 키다
	{
		input = _getch();
		gamestate = Update(input, gamestate);
		Render(gamestate, prev_gamestate);
		prev_gamestate = gamestate;
	}

	return 0;
}
