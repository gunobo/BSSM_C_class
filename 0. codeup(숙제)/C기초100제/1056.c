#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // (a가 참이면서 b가 거짓) 이거나 (a가 거짓이면서 b가 참) 인 경우
    printf("%d", (a && !b) || (!a && b));

    return 0;
}