#include "ScreenRenderer.h"

#define GAME_STATE_END 0
#define GAME_STATE_TITLE 1
#define GAME_STATE_PLAYING 2
#define GAME_STATE_LOADING 3
/*
* 게임 상태변수 
* 0: 게임종료
* 1: 타이틀화면
* 2: 게임중
*/ 
int GameState;

char inputChar;	//전역변수

int Input();
int Update();
int Render();

int main()
{
	/*초기화*/
	GameState = GAME_STATE_LOADING;
	
	/*게임루프*/
	while (GameState != GAME_STATE_END)	
	{
		Input();		/*입력    */
		Update();		/*업데이트*/
		Render();		/*렌더링  */
	}

	return 0;
}

int Input()
{
	if (GameState != 3)
	{
		inputChar = _getch();
		
	}
	
	return 0;
}

int Update()
{
	if (GameState == GAME_STATE_LOADING)
	{
		GameState = GAME_STATE_TITLE;
	}
	else if(GameState == GAME_STATE_TITLE)
	{
		if (inputChar == '1')
			GameState = GAME_STATE_PLAYING;
		else if (inputChar == '3')
			GameState = GAME_STATE_END;
		else
			puts("> 잘못입력했습니다");
	}
	return 0;
}

int Render()
{
	if (GameState == GAME_STATE_TITLE)
	{
		PrintTitle();
	}
	else if (GameState == GAME_STATE_PLAYING)
	{
		PrintGamePlaying();
	}
	else if (GameState == GAME_STATE_END)
	{
		PrintGameEnd();
	}
	
	return 0;
}

