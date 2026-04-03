#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // 논리 연산자 || (OR)를 사용하여 결과 출력
    // a 또는 b 중 하나라도 1(참)이면 1이 출력됩니다.
    printf("%d", a || b);

    return 0;
}