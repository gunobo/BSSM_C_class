#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    // 논리 연산자 ! (NOT)를 사용하여 입력된 값의 반대 상태를 출력
    // a가 0이면 !a는 1이 되고, a가 1이면 !a는 0이 됩니다.
    printf("%d", !a);

    return 0;
}