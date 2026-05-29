#include <stdio.h>

// 지역 변수란? 
/*
    일정 지역(블록)에서만 사용하는 변수 
    ex) auto int a = 10;  -> auto 생략 가능
    특정 영역 내(블록)에서 선언된 변수
    스택 영역에 저장되기 때문에 
    함수가 종료되면 공간도 사라짐
    변수 선언 시 초기화하지 않으면
    쓰레기 값이 들어감
*/

int main(void) {
    for(int i = 0; i < 5; i++) {
        printf("%d",i);
    }
    printf("%d\n",i);
    {
        int i = 10;
        printf("%d",i);
    }
    printf("%d\n",i);
}