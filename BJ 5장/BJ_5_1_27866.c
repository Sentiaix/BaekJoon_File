#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <입력> 단어와 정수를 입력받음
// <출력> 입력받은 단어의 정수번째 char을 출력함

int main(){
    int num;
    char str[1000];

    scanf("%s %d", &str, &num);

    printf("%c\n", str[num - 1]);

    return 0;
}