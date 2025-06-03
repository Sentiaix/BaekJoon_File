#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제>: https://www.acmicpc.net/problem/5073

typedef struct len{
    int a;
    int b;
    int c;
} LEN;

// function declaration
void chk_kind(LEN len); // 도형 판단
void swap(int* x, int* y); // 값 교체 함수

int main(){
    LEN len;

    
    while(1){
        scanf("%d %d %d", &len.a, &len.b, &len.c);
        if(len.a + len.b + len.c <= 0) break;
        chk_kind(len);
    }
        

    return 0;
}

// define function
void chk_kind(LEN len){

    if (len.a > len.b) swap(&len.a, &len.b);
    if (len.b > len.c) swap(&len.b, &len.c);
    if (len.a > len.b) swap(&len.a, &len.b); 

    if(len.a + len. b <= len.c){
        printf("Invalid\n");
    } else if(len.a == len.b && len.b == len.c){
        printf("Equilateral\n");
    } else if(len.a == len.b || len.b == len.c || len.a == len.c){
        printf("Isosceles\n");
    } else if(len.a != len.b && len.a != len.c && len.b != len.c){
        printf("Scalene\n");
    }
}

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}