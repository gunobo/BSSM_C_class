#include <stdio.h>
int main() {
    int a = 5, d= 4, n = 5, i;
    for (i=1;i<n;i++) {
        a = a+d;
    }
    printf("%d",a);
    return 0;
}