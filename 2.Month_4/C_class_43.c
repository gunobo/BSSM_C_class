#include <stdio.h>
#include <string.h>
int main() {
   char str[100];
   scanf("%[^\n]", str);
   printf("%s",str);
   printf("출력완료");
}