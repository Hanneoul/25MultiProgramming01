#include "GameLoop.h"
#include "GameContents.h"
#include "ANSI2D.h"
#include "time.h"


//고양이에 관련된 전역변수
int cat_x = 0;
int cat_y = 19;

int prev_cat_x = 0;
int prev_cat_y = 19;

// 고양이 상태
// 0 : 지상에 있음
// 1 : 공중에 있음
int catState = 0;

//고양이의 체공시간
int airHangTimeMs = 1000;
double airHangClockElapse=0;
clock_t airHangClockStart = 0, airHangClockEnd = 0;

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
			cat_x = cat_x - 1;
			if (cat_x < 0)
			{
				cat_x = 0;
			}
		}
		else if (input == 'd' || input == 'D')
		{
			cat_x = cat_x + 1;
			if (cat_x > 70)
			{
				cat_x = 70;
			}
		}
		else if (input == 32)	//스페이스바
		{
			prev_cat_x = cat_x;
			prev_cat_y = cat_y;
			cat_y = 15;

			catState = 1;
			airHangClockStart = clock();
			airHangClockElapse = 0;
		}
		else if (input == 27)	//ESC
		{
			gs_result = 0;
		}
	}

	return gs_result;
}

void Render(int gs, int prev_gs, double fps)
{
	
	if (gs == GAMESTATE_TITLE && prev_gs != GAMESTATE_TITLE)
	{
		DrawTitle();
	}
	else if (gs == GAMESTATE_INTRO && prev_gs != GAMESTATE_INTRO)
	{
		DrawIntroduction();
	}
	else if (gs == GAMESTATE_GAMESTART)
	{
		if (prev_gs != GAMESTATE_GAMESTART)
		{
			DrawGameStart();
			DeleteObjectCat(prev_cat_x, prev_cat_y);
			DrawObjectCat(cat_x, cat_y);
		}
		else
		{
			if (catState == 1)
			{
				airHangClockEnd = clock();
				airHangClockElapse = (double)(airHangClockEnd - airHangClockStart);
				if (airHangClockElapse > airHangTimeMs)
				{
					prev_cat_x = cat_x;
					prev_cat_y = cat_y;
					cat_y = 19;
					catState = 0;
				}
			}

			DeleteObjectCat(prev_cat_x, prev_cat_y);
			DrawObjectCat(cat_x, cat_y);
		}
	}
	else if (gs == GAMESTATE_GAMEOVER)
	{
		DrawGameOver();
	}
	DrawFPS(fps);
	
}