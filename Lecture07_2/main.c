#include "Title.h"

int main()
{
    /*타이틀화면 출력*/
    PrintTitle();
    PrintTitleMenu();

    /*입력받기*/
    int in = GetTitleMenuInput();

    while (in == 1 || in == 2)
    {
        /*입력받은내용으로 출력하기*/
        PrintTitleMenuSelectMessage(in);
        
        /*타이틀화면 출력*/
        PrintTitle();
        PrintTitleMenu();

        /*입력받기*/
        in = GetTitleMenuInput();
    }

    /*입력받은내용으로 출력하기*/
    PrintTitleMenuSelectMessage(in);

    return 0;
}