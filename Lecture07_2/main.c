#include "Title.h"

int main()
{
    /*Ÿ��Ʋȭ�� ���*/
    PrintTitle();
    PrintTitleMenu();

    /*�Է¹ޱ�*/
    int in = GetTitleMenuInput();

    while (in == 1 || in == 2)
    {
        /*�Է¹����������� ����ϱ�*/
        PrintTitleMenuSelectMessage(in);
        
        /*Ÿ��Ʋȭ�� ���*/
        PrintTitle();
        PrintTitleMenu();

        /*�Է¹ޱ�*/
        in = GetTitleMenuInput();
    }

    /*�Է¹����������� ����ϱ�*/
    PrintTitleMenuSelectMessage(in);

    return 0;
}