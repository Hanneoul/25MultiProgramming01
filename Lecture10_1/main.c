#include <stdio.h>

int TitleScreen()
{
	/* 타이틀 화면 출력 */
	printf("\n\n");
	printf("\t\t*********************************\n");
	printf("\t\t*        \"고양이의 모험\"        *\n");
	printf("\t\t*********************************\n");
	printf("\t\t         - Version 1.0 -\n\n");
	/* 메뉴 출력 */
	printf("\t\t          1. 게임시작\n");
	printf("\t\t          2. 게임소개\n");
	printf("\t\t          3. 그냥종료\n\n");
}

int main()
{
	TitleScreen();

	printf("\033[5;3H 으하하하 \033[10;3H");

	return 0;
}