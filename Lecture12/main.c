/*
* ANSI(American National Standard Institute)
* Escape Sequence ( '\033' ��ȣ�� ������ )
* 
* 1. �ؽ�Ʈ�� ��Ÿ��
*       \033[0m      :��Ÿ�� �ʱ�ȭ
*       \033[1m      :����ü ����
*       \033[2m      :��Ӱ� ����
*       \033[3m      :���Ÿ� ��Ÿ��
*       \033[4m      :���� ��Ÿ��
*       \033[5m      :������ ��Ÿ��
* 
*   �۾�����
*       \033[30m      :Black
*       \033[31m      :Red
*       \033[32m      :Green
*       \033[33m      :Yellow
*       \033[34m      :Blue
*       \033[35m      :Magenta
*       \033[36m      :Cyan
*       \033[37m      :White
* 
*       \033[90m      :Gray
*       \033[91m      :Bright Red
*       \033[92m      :Bright Green
*       \033[93m      :Bright Yellow
*       \033[94m      :Bright Blue
*       \033[95m      :Bright Magenta
*       \033[96m      :Bright Cyan
*       \033[96m      :�����
* 
*   ������
*       \033[4xm      :������ �ؽ�Ʈ ���� ����
*       \033[10xm     :��������
* 
* 2. Ŀ���� ��� ����
*       \033[y;xH   :Ŀ�� ��ǥ �̵� *
*       \033[u      :Ŀ�� ��ǥ �̵�
*       \033[s      :Ŀ�� ��ǥ �̵�
* 3. ȭ�� ����
*       \033[2J     : ȭ�� Ŭ���� *
*       \033[2K     : ���� ����
*       \033[1K     : Ŀ�� ���� ����
*       \033[K      : Ŀ�� ������ ����
*/      

#include <stdio.h>

int main()
{
    //����� ����
    printf("\033[5;10H");
    printf("I\'m Here Man~!!");

    //����� ����
    printf("\033[5;15H");
    printf("\033[K");


    printf("\033[5;10H");
    printf("I\'m Here Man~!!");

    printf("\033[6;10H\n");
    printf("\033[2m�ȳ� �� ��ο� ���̾�.\033[0m\n");
    printf("\033[0m�ȳ� �� ��ο� ���� �ƴϾ�.\033[0m\n");
    printf("\033[1m�ȳ� �� ����ü��.\033[0m\n");
    printf("\033[3m�ȳ� �� ���Ÿ��̾�.\033[0m\n");
    printf("\033[4m�ȳ� �� �����̾�.\033[0m\n");
    printf("\033[5m�ȳ� �� �����̾�.\033[0m\n");
    

    printf("\033[30mBlack\033[0m\n");
    printf("\033[31mRed\033[0m\n");
    printf("\033[32mGreen\033[0m\n");
    printf("\033[33mYellow\033[0m\n");
    printf("\033[34mBlue\033[0m\n");
    printf("\033[35mMagenta\033[0m\n");
    printf("\033[36mCyan\033[0m\n");
    printf("\033[37mWhite\033[0m\n");
    
    printf("\033[90mBright Black (Gray)\033[0m\n");
    printf("\033[91mBright Red\033[0m\n");
    printf("\033[92mBright Green\033[0m\n");
    printf("\033[93mBright Yellow\033[0m\n");
    printf("\033[94mBright Blue\033[0m\n");
    printf("\033[95mBright Magenta\033[0m\n");
    printf("\033[96mBright Cyan\033[0m\n");
    printf("\033[97mBright White\033[0m\n");

    printf("\033[105m\033[31mRed\033[0m\n");
    printf("\033[105m\033[33mYellow\033[0m\n");
    printf("\033[105m\033[32mGreen\033[0m\n");

    //printf("\033[15;10H");

    

    return 0;
}