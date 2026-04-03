#include <stdio.h>

int main() {
    long long int a, b; // 입력 범위가 int의 경계값을 포함하므로 안전하게 long long 사용
    scanf("%lld %lld", &a, &b);

    // a가 b보다 크면 1, 그렇지 않으면 0을 출력합니다.
    printf("%d", a > b);

    return 0;
}