#pragma once

// Ÿ��Ʋȭ�� �׸���
void DrawTitle();

// ���ӻ��� : ���ӼҰ�(1)
void DrawIntroduction();

// ���ӻ��� : ���ӽ���(2)
void DrawGameStart();

//����� �׸���
void DrawObjectCat(int x, int y);

//����� �����
void DeleteObjectCat(int x, int y);

// ���ӻ��� : ���ӿ���(3)
void DrawGameOver();

void DrawFPS(double fps);
