#include <stdio.h>

int main(void) {
    int money, remain, book = 15000;
    printf("책의 가격은 15000원입니다.\n");
    printf("당신이 가진 금액을 입력하세요:");
    scanf("%d", &money);
    if (money >= book) {
        remain = money - book;
        printf("책을 구매하였습니다. 남은 금액: %d원\n", remain);
    }
    else {
        printf("금액이 부족합니다. 책을 구매할 수 없습니다.\n");
    }
}