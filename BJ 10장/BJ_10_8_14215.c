#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제>: https://www.acmicpc.net/problem/14215

typedef struct len{
    int a;
    int b;
    int c;
} LEN;

// function declaration
void chk_triangle(LEN len); // 삼각형 가능한지 확인하는 함수
void sort(LEN* len); // 주어진 변을 a<b<c 로 정렬하는 함수

int main(){
    LEN len;

    scanf("%d %d %d", &len.a, &len.b, &len.c);
    chk_triangle(len);

    return 0;
}

// define function
void chk_triangle(LEN len){
    


}
void swap(LEN* len){
    int value[3];
    int temp;

    value[0] = len->a;
    value[1] = len->b;
    value[2] = len->c;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3 - i; j++){
            if(value[j] > value[j + 1]){
                temp = value[j];
                value[j] = value[j + 1];
                value[j + 1] = temp;
            }
        }
    }

    len->a = value[0];
    len->b = value[1];
    len->c = value[2];
    
}