#define COLOR_BLACK 0
#define COLOR_RED 1
#define COLOR_GREEN 2
#define COLOR_YELLOW 3
#define COLOR_BLUE 4
#define COLOR_MAGENTA 5
#define COLOR_CYAN 6
#define COLOR_WHITE 7

void moveCursorToXY(int x, int y);

void ChangeTextBGColor(int color);

void ChangeTextColor(int color);

void InitTextStyle();

int ClearScreen(int width, int height);
