#pragma once
#include <stdio.h>
#include <conio.h>

int Title();
int TitleMenu();
/* Ÿ��Ʋ �޴��� ���ؼ� �Է��� ������, �ش� �޴� ���� �������ش�.
 * 1. ���ӽ���  => 1
 * 2. ���ӼҰ�  => 2
 * 3. �׳�����  => 3
 * ����         => -1
 */
int TitleMenuInput();
int TitleMenuSelectMessage(int input);