#include <stdio.h>

int main(void) {
    int a = 10, b = 10;
    if (a > b) {
        printf("a > b\n");
    }
    else if (a < b) {
        printf("a < b\n");
    }
    else {
        printf("a == b\n");
    }
    return 0;
}