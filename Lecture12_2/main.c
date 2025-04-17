#include <stdio.h>

#define COLOR_BLACK 0
#define COLOR_RED 1
#define COLOR_GREEN 2
#define COLOR_YELLOW 3
#define COLOR_BLUE 4
#define COLOR_MAGENTA 5
#define COLOR_CYAN 6
#define COLOR_WHITE 7

void moveCursorToXY(int x, int y)
{
	printf("\033[%i;%iH",y,x );
}
void ChangeTextBGColor(int color)
{
	printf("\033[4%im", color);
}
void ChangeTextColor(int color)
{
	printf("\033[3%im", color);
}
void InitTextStyle()
{
	printf("\033[0m");
}

int ClearScreen(int width, int height)
{
	int i, j; 
	i = 0;
	j = 0;
	while(j< height)
	{
		while (i<width)
		{
			printf(" ");
			i = i + 1;
		}
		printf("\n");
		i = 0;
		j = j + 1;
	}
	return 0;
}

int TitleScreen()
{
	/* 타이틀 화면 출력 */
	printf("\n\n");
	printf("\t\t*********************************\n");
	printf("\t\t*        \"고양이의 모험\"        *\n");
	printf("\t\t*********************************\n");
	printf("\t\t         - Version 1.0 -\n\n");
	
}

int main()
{
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

    return 0;
}
