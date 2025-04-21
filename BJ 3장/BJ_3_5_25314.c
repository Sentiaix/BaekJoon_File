#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int a;

    scanf("%d", &a); //n바이트 정수 입력

    if(a>=4 && a<=1000){ //입력값 범위를 정해준 건 BOJ에서 그 값만 넣는다는 뜻임.
        for(int i = 0; i < (a/4); i++){
            printf("long ");
        }
    }

    printf("int\n");

    return 0;
}