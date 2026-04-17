#include <stdio.h>
int main(void) {
    char str1[20] = "hello";
    char str2[20] = {'h','e','l','l','o'};
    for(int i=0;i<20;i++){
        printf("%d ",str1[i]);
    }
    printf("\n");
    for(int i=0;i<20;i++) {
        printf("%d ", str2[i]);
    }
    printf("\n");
    return 0;
}