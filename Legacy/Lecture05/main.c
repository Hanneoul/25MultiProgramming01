int main(void)
{
     /* 연산자 정리 
     * & : AND   3 & 2 = 0b11 & 0b10 = 0b10 = 2
     * | : OR
     * ! : NOT
     * +-/* : 사칙연산
     * = : 대입연산자
     * == : 같다면
     * || : ~하고 ~도 충족해야함
     * && : ~나 ~중 1개이상상 충족해야함  3 && 2 = 1
     */

    int input1 = 1;
    int input2 = 0;

    if (input1 == input2 || input1 == 1)
    { 
        puts("Light on!");
    }
    else
    {
        puts("Light off!");
    }    

    return 0;    
}