#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // 논리 연산자 && (AND)를 사용하여 결과 출력
    // a와 b가 모두 1(참)일 때만 1이 출력됩니다.
    printf("%d", a && b);

    return 0;
}