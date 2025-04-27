#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// <문제> https://www.acmicpc.net/problem/10798

int main(){
    char str[5][16] = {0,}; // {0, }으로 각 str[i]에 \0을 정렬

    for(int i = 0; i < 5; i++){
        scanf("%s", str[i]);
    }

    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 5; j++){
            if(str[j][i] != '\0'){
                printf("%c", str[j][i]);
            }
        }
    }
    
    printf("\n");

    return 0;
}