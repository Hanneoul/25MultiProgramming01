#pragma once
#include <stdio.h>
#include <conio.h>

int PrintTitle();
int PrintTitleMenu();
/* Ÿ��Ʋ �޴��� ���ؼ� �Է��� ������, �ش� �޴� ���� �������ش�.
 * 1. ���ӽ���  => 1
 * 2. ���ӼҰ�  => 2
 * 3. �׳�����  => 3
 * ����         => -1
 */
int GetTitleMenuInput();
int PrintTitleMenuSelectMessage(int input);