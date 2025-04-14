#pragma once
#include <stdio.h>
#include <conio.h>

int Title();
int TitleMenu();
/* 타이틀 메뉴에 대해서 입력을 했을때, 해당 메뉴 값을 리턴해준다.
 * 1. 게임시작  => 1
 * 2. 게임소개  => 2
 * 3. 그냥종료  => 3
 * 오류         => -1
 */
int TitleMenuInput();
int TitleMenuSelectMessage(int input);