#include <stdio.h>

int sum(int x, int y);

int main(void) {
    int a,b, result;

    scanf("%d%d", &a,&b);
    result = sum(a,b);
    printf("a+b=%d\n",result);
    return 0
}

int sum(int x, int y) {
    return x+y;
}