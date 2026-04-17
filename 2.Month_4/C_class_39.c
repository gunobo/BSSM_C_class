#include <stdio.h>
int main(void) {
    char str[14] = "Hello, World!";
    printf("%s\n",str);

    scanf("%s", str);
    printf("%s\n", str);
    return 0;
}