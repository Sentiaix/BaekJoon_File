#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제>: https://www.acmicpc.net/problem/10101

typedef struct angle{
    int a;
    int b;
    int c;
} ANGLE;

// function declaration
void chk_kind(ANGLE ag); // 도형 판단

int main(){
    ANGLE ag;

    scanf("%d %d %d", &ag.a, &ag.b, &ag.c);

    chk_kind(ag);

    return 0;
}

// define function
void chk_kind(ANGLE ag){
    int angle_sum = ag.a + ag.b + ag. c; // 모든 각의 합
    int ag_err = 1; // 각의 합에 문제가 없으면 1

    if(angle_sum != 180) ag_err = 0;

    if(ag_err && ag.a == 60 && ag.a == ag.b && ag.b == ag.c){
        printf("Equilateral\n");
    } else if(ag_err && (ag.a == ag.b || ag.b == ag.c || ag.a == ag.c)){
        printf("Isosceles\n");
    } else if(ag_err){
        printf("Scalene\n");
    } else{
        printf("Error\n");
    }
}