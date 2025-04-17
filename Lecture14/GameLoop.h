#pragma once

#define GAMESTATE_NOUPDATE -2
#define GAMESTATE_QUIT -1
#define GAMESTATE_TITLE 0
#define GAMESTATE_INTRO 1
#define GAMESTATE_GAMESTART 2
#define GAMESTATE_GAMEOVER 3

int Update(char input, int gs);
void Render(int gs, int prev_gs, double fps);
