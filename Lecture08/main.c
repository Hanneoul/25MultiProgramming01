#include "ScreenRenderer.h"

#define GAME_STATE_END 0
#define GAME_STATE_TITLE 1
#define GAME_STATE_PLAYING 2
#define GAME_STATE_LOADING 3
/*
* ���� ���º��� 
* 0: ��������
* 1: Ÿ��Ʋȭ��
* 2: ������
*/ 
int GameState;

char inputChar;	//��������

int Input();
int Update();
int Render();

int main()
{
	/*�ʱ�ȭ*/
	GameState = GAME_STATE_LOADING;
	
	/*���ӷ���*/
	while (GameState != GAME_STATE_END)	
	{
		Input();		/*�Է�    */
		Update();		/*������Ʈ*/
		Render();		/*������  */
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
			puts("> �߸��Է��߽��ϴ�");
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

