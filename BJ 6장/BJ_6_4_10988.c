#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// <문제> https://www.acmicpc.net/problem/10988

int main(){
    char str[101]; // string 받기
    int prchk = 0; // 출력 검증

    scanf("%s", str);
    //fgets는 입력 후 \n까지 받아먹어서 abc 입력하면 abc\n\0이 됨.
    //fgets(str, 101, stdin);   strlen은 4가 되고, \n이 str에 들어가 오류발생가능함

    int n = strlen(str); // n에 입력받은 문자열 길이 저장

    // 대칭인지 a번과 n - a번이랑 비교
    for(int i = 0; i < n / 2; i++){
        if(str[i] != str[n - 1 - i]){
            printf("0\n");
            prchk = 1;
            break;
        }
    }

    if(prchk == 0){
        printf("1\n");
    }

    return 0;
}