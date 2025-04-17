#include "ANSI2D.h"
#include <stdio.h>

void moveCursorToXY(int x, int y)
{
	printf("\033[%i;%iH", y, x);
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
	while (j < height)
	{
		while (i < width)
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