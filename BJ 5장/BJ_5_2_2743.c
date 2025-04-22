#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // 문자열 헤더파일

int main(){
    char str[100];

    scanf("%s", &str);

    // strlen은 문자열의 길이를 int로 반환함
    printf("%d\n", strlen(str));

    return 0;
}