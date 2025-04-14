#include "Title.h"

int Title()
{
    /* Ÿ��Ʋ ȭ�� ��� */
    puts("\n");
    puts("\t\t*********************************");
    puts("\t\t*\t  ������� ����\t\t*");
    puts("\t\t*********************************");
    puts("\t\t\t   Version 1.0\n");

    return 0;
}

int TitleMenu()
{
    /* Ÿ��Ʋ �޴� ��� */
    puts("\t\t\t   1. ���ӽ���");
    puts("\t\t\t   2. ���ӼҰ�");
    puts("\t\t\t   3. �׳�����\n");
     
    return 0;
}

/* Ÿ��Ʋ �޴��� ���ؼ� �Է��� ������, �ش� �޴� ���� �������ش�.
 * 1. ���ӽ���  => 1
 * 2. ���ӼҰ�  => 2
 * 3. �׳�����  => 3
 * ����         => -1
 */
int TitleMenuInput()
{
    /* �Է� */
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
        puts("Error : TitleMenuInput() �Լ��� �Է°��� �߸��Ǿ����ϴ�.");
        return -1;
    }

    return 0;
}

int TitleMenuSelectMessage(int input)
{
    if (input == 1)
    {
        puts("������ �����Ѵ�!");
    }
    else if (input == 2)
    {
        puts("���� �Ұ��� �޾Ƽ� ���ϰ�....");
    }
    else if (input == 3)
    {
        puts("���� ������~!");
    }
    else
    {
        return -1;
    }
}