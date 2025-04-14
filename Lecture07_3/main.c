

#include "Title.h"

int PrintCatIdle()
{
    puts("~( ^.^)~");
    return 0;
}

int PrintCatInverseIdle()
{
    puts("~(^.^ )~");
    return 0;
}

int main()
{
    int in = 2;

    while (in == 1 || in == 2)
    {
        /*초기화면출력*/
        PrintTitle();
        PrintTitleMenu();
        /*입력받기*/
        in = GetTitleMenuInput();
        PrintTitleMenuSelectMessage(in);
        
        if (in == 1)
        {
            int i = 0;
            while (i < 10)
            {
                Sleep(200);
                system("cls");
                PrintCatIdle();
                Sleep(200);
                system("cls");
                PrintCatInverseIdle();
                i = i + 1;
            }
        }
    }

    return 0;
}