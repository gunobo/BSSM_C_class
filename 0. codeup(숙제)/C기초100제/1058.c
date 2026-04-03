#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // a가 거짓(0)이고 b가 거짓(0)일 때만 1 출력
    // 방법 1: !(a || b) -> a 또는 b가 참인 경우의 반대
    // 방법 2: !a && !b -> a가 아니고 b도 아닌 경우
    printf("%d", !(a || b));

    return 0;
}