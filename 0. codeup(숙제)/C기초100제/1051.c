#include <stdio.h>

int main() {
    long long int a, b; // 입력 범위가 int의 최대치를 넘으므로 long long 사용
    scanf("%lld %lld", &a, &b);

    // 문제의 조건: b가 a보다 크거나 같으면 1, 아니면 0 출력
    printf("%d", b >= a);

    return 0;
}