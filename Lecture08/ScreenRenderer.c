#include "ScreenRenderer.h"

/*화면에 출력을 하는 함수들*/
int PrintTitle()
{
	/* 타이틀 화면 출력 */
	puts("\n");
	puts("\t\t*********************************");
	puts("\t\t*\t  고양이의 모험\t\t*");
	puts("\t\t*********************************");
	puts("\t\t\t   Version 1.0\n");
	/* 메뉴 출력 */
	puts("\t\t\t   1. 게임시작");
	puts("\t\t\t   2. 게임소개");
	puts("\t\t\t   3. 그냥종료\n");

	return 0;
}

int PrintGameOver()
{
	return 0;
}
int PrintGameEnd()
{
	puts("\t\t*********************************");
	puts("\t\t*       다음에 또 만나요        *");
	puts("\t\t*********************************");
	return 0;
}
int PrintGamePlaying()
{
	puts("~( ^.^)~");
	return 0;
}