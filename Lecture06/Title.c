#include "Title.h"

int Title()
{
    /* 타이틀 화면 출력 */
    puts("\n");
    puts("\t\t*********************************");
    puts("\t\t*\t  고양이의 모험\t\t*");
    puts("\t\t*********************************");
    puts("\t\t\t   Version 1.0\n");

    return 0;
}

int TitleMenu()
{
    /* 타이틀 메뉴 출력 */
    puts("\t\t\t   1. 게임시작");
    puts("\t\t\t   2. 게임소개");
    puts("\t\t\t   3. 그냥종료\n");
     
    return 0;
}

/* 타이틀 메뉴에 대해서 입력을 했을때, 해당 메뉴 값을 리턴해준다.
 * 1. 게임시작  => 1
 * 2. 게임소개  => 2
 * 3. 그냥종료  => 3
 * 오류         => -1
 */
int TitleMenuInput()
{
    /* 입력 */
    char input;
    input = _getch();

    if (input == '1')
    {
        return 1;
    }
    else if (input == '2')
    {
        return 2;
    }
    else if (input == '3')
    {
        return 3;
    }
    else
    {
        puts("Error : TitleMenuInput() 함수의 입력값이 잘못되었습니다.");
        return -1;
    }

    return 0;
}

int TitleMenuSelectMessage(int input)
{
    if (input == 1)
    {
        puts("게임을 시작한다!");
    }
    else if (input == 2)
    {
        puts("게임 소개는 받아서 뭐하게....");
    }
    else if (input == 3)
    {
        puts("게임 종료함~!");
    }
    else
    {
        return -1;
    }
}