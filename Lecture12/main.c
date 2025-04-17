/*
* ANSI(American National Standard Institute)
* Escape Sequence ( '\033' 기호로 시작함 )
* 
* 1. 텍스트의 스타일
*       \033[0m      :스타일 초기화
*       \033[1m      :볼드체 변경
*       \033[2m      :어둡게 변경
*       \033[3m      :이탤릭 스타일
*       \033[4m      :밑줄 스타일
*       \033[5m      :깜빡임 스타일
* 
*   글씨색상
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
*       \033[96m      :순백색
* 
*   배경색상
*       \033[4xm      :배경색은 텍스트 색과 동일
*       \033[10xm     :마찬가지
* 
* 2. 커서의 제어가 가능
*       \033[y;xH   :커서 좌표 이동 *
*       \033[u      :커서 좌표 이동
*       \033[s      :커서 좌표 이동
* 3. 화면 제어
*       \033[2J     : 화면 클리어 *
*       \033[2K     : 한줄 지움
*       \033[1K     : 커서 왼쪽 지움
*       \033[K      : 커서 오른쪽 지움
*/      

#include <stdio.h>

int main()
{
    //지우기 예제
    printf("\033[5;10H");
    printf("I\'m Here Man~!!");

    //지우기 예제
    printf("\033[5;15H");
    printf("\033[K");


    printf("\033[5;10H");
    printf("I\'m Here Man~!!");

    printf("\033[6;10H\n");
    printf("\033[2m안녕 난 어두운 색이야.\033[0m\n");
    printf("\033[0m안녕 난 어두운 색이 아니야.\033[0m\n");
    printf("\033[1m안녕 난 볼드체야.\033[0m\n");
    printf("\033[3m안녕 난 이탤릭이야.\033[0m\n");
    printf("\033[4m안녕 난 밑줄이야.\033[0m\n");
    printf("\033[5m안녕 난 깜빡이야.\033[0m\n");
    

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