#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strlen

int main(){
    int sum = 0;

    int i_strlen; // 문자열 길이
    scanf("%d", &i_strlen);

    char str[i_strlen];
    scanf("%s", &str);

    for(int i = 0; i < i_strlen; i++){
        sum += str[i] - 48; // ASCII 코드에서 char(string) > int를 위해 48만큼 뺴야합니다.
    }

    printf("%d\n", sum);

    return 0;
}