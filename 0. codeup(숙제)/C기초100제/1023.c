#include <stdio.h>

int main() {
    int a, b;

    // 소수점(.)을 기준으로 앞뒤를 각각 정수형(%d)으로 입력받습니다.
    scanf("%d.%d", &a, &b);

    // 첫 번째 줄에 정수 부분, 두 번째 줄에 실수 부분을 출력합니다.
    printf("%d\n%d", a, b);

    return 0;
}