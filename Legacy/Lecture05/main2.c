int main()
{
    /* 타이틀 화면 출력 */
    puts("\n"); 
    puts("\t\t*********************************");
    puts("\t\t*\t  고양이의 모험\t\t*");
    puts("\t\t*********************************");
    puts("\t\t\t   Version 1.0\n");

    /* 타이틀 메뉴 출력 */
    puts("\t\t\t   1. 게임시작");
    puts("\t\t\t   2. 게임소개");
    puts("\t\t\t   3. 그냥종료\n");

    /* 입력 */
    char input;
    input = getch();

    if(input == '1')
    { 
        puts("게임이 시작됩니다!");
    }
    else if(input == '2')
    {
        puts("게임을 만든 자: 이은석\n학번: 121231231");
    }
    else if(input == '3')
    {
        puts("게임을 그냥 종료합니다!");
    }
    else 
    {
        puts("넌 왜이리 말을 안듣냐... 그냥 에러나 받아라!!!");
    }

    return 0;
}
