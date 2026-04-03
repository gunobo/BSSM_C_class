#include <stdio.h>

int main() {
    long long int a, b; // 입력 범위가 int의 경계값을 포함하므로 안전하게 선언
    scanf("%lld %lld", &a, &b);

    // 비트 단위 XOR 연산자 ^ 사용
    printf("%lld", a ^ b);

    return 0;
}