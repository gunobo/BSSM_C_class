#include <stdio.h>

int main() {
    float f = 3.1415926535;
    double d = 3.1415926535;
    printf("float형 변수 f의 값: %.4f\n", f);
    printf("float형 변수 f의 값: %.10f\n", f);
    printf("double형 변수 d의 값: %.10f\n", d);
    return 0;
}
