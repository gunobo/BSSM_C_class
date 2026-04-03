#include <stdio.h>

int main() {
    long long int n; // 입력 범위가 int의 경계값을 포함하므로 안전하게 선언
    scanf("%lld", &n);

    // 비트 단위 NOT 연산자 ~ 사용
    // printf에서 %d(또는 %lld)로 출력하면 
    // 컴퓨터는 반전된 비트열을 다시 정수로 해석하여 출력합니다.
    printf("%lld", ~n);

    return 0;
}