/* function : main이란 이름의 function을 만들어보자. 
 * 사칙연산 : + - / * 
 * int : integer 라는 자료형
 * y = f(x) 형태로 함수제작
 */

// sum = x + y


#include <stdio.h>

int sum(int a, int b)
{
	return a+b;
}

int main()
{
	int a = sum(1212121212,7);
	printf("교수 : 그래서 니놈의 학번에 7을 더하면 무슨 숫자냐? \n");
	printf("학생 : %d 이다! 할일도 없나보네 쓸데없는게 궁금하고말이야..",a);
	return 0;
}