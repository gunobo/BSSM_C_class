#include <stdio.h>
#include <string.h>
int main(void) {
    char str1[20] = "cat";
    char str2[50];

    strcpy(str1, "dog");
    strcpy(str2,str1);
    printf("%s, %s\n",str1,str2);
    return 0;
}