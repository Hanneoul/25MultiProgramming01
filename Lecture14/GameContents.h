#pragma once

// 타이틀화면 그리기
void DrawTitle();

// 게임상태 : 게임소개(1)
void DrawIntroduction();

// 게임상태 : 게임시작(2)
void DrawGameStart();

//고양이 그리기
void DrawObjectCat(int x, int y);

//고양이 지우기
void DeleteObjectCat(int x, int y);

// 게임상태 : 게임오버(3)
void DrawGameOver();

void DrawFPS(double fps);
