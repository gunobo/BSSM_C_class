#include <stdio.h>

int main() {
    long long int a, b, c; // 입력 범위가 int 범위를 넘을 수 있으므로 long long 사용
    scanf("%lld %lld %lld", &a, &b, &c);

    // 3항 연산자를 중첩하여 최솟값 계산 및 출력
    printf("%lld\n", (a < b ? a : b) < c ? (a < b ? a : b) : c);

    return 0;
}