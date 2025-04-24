#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제> https://www.acmicpc.net/problem/2444

int main(){
    int x;

    scanf("%d", &x);

    for(int i = 0; i < x; i++){
        for(int j = 0; j < x - i - 1; j++){
            printf(" ");
        }
        for(int k = 0; k < 2 * i + 1; k++){
            printf("*");
        }
        printf("\n");
    }

    for(int i = x - 1; i > 0; i--){
        for(int j = x - i; j > 0; j--){
            printf(" ");
        }
        for(int k = 2 * i - 1; k > 0; k--){
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}