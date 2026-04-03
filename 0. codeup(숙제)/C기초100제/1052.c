#include <stdio.h>

int main() {
    long long int a, b; // 입력 범위가 int의 경계값을 포함하므로 long long 사용
    scanf("%lld %lld", &a, &b);

    // a와 b가 서로 다르면 1, 같으면 0을 출력합니다.
    printf("%d", a != b);

    return 0;
}