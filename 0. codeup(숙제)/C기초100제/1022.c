#include <stdio.h>

int main() {
    char data[2001]; // 마지막 널 문자(\0)를 고려하여 넉넉하게 선언

    // stdin(표준 입력)으로부터 최대 2000자까지 읽어 data에 저장
    if (fgets(data, sizeof(data), stdin) != NULL) {
        printf("%s", data);
    }

    return 0;
}