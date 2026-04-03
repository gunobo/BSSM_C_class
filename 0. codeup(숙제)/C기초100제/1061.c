#include <stdio.h>

int main() {
    long long int a, b; // int 범위를 포함하므로 안전하게 long long 사용
    scanf("%lld %lld", &a, &b);

    // 비트 단위 OR 연산자 | 사용
    printf("%lld", a | b);

    return 0;
}