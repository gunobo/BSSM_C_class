#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // a와 b가 같으면 1, 다르면 0을 출력
    printf("%d", a == b);

    return 0;
}