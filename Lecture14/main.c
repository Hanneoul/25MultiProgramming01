#include "ANSI2D.h"
#include "GameLoop.h"
#include <stdio.h>
#include <conio.h>
#include <time.h>

// kbhit() Ű���尡 ���ȴٸ� ��/ �ȴ��ȴٸ� ����

// ANSI Escape Sequence
// Ŀ�� �����	\033[?25l	Ŀ���� �� ���̰� ��
// Ŀ�� ���̱�	\033[?25h	Ŀ���� �ٽ� ���̰� ��

int main()
{
	int gamestate = GAMESTATE_TITLE;
	int prev_gamestate = GAMESTATE_NOUPDATE;
	char input = 0;
	printf("\033[?25l");

	clock_t startTime = clock();

	Render(gamestate, prev_gamestate, 0);

	double elapsed_ms_sum = 0.0;

	while (gamestate != -1)		// 27 : ESC Ű��
	{
		clock_t endTime = clock();
		double elapsed_ms = (double)(endTime - startTime);
		startTime = endTime;
		
		elapsed_ms_sum += elapsed_ms; //elapsed_ms_sum = elapsed_ms_sum + elapsed_ms

		if(elapsed_ms_sum > 1000.0/10.0)
		{ 
			prev_gamestate = gamestate;
			if (_kbhit())
			{
				input = _getch();
				gamestate = Update(input, gamestate);				
			}
			
			Render(gamestate, prev_gamestate, 1000.0 / elapsed_ms_sum);
			elapsed_ms_sum = 0;
		}
		
		
	}

	return 0;
}
