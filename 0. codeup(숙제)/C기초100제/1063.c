#include <stdio.h>

int main() {
    long long int a, b; // 입력 범위가 int의 경계값이므로 안전하게 long long 사용
    scanf("%lld %lld", &a, &b);

    // a가 b보다 크면 a를, 그렇지 않으면(작거나 같으면) b를 선택하여 출력
    printf("%lld", a > b ? a : b);

    return 0;
}