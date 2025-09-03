#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제>: https://www.acmicpc.net/problem/19532

// function declaration
void solve_equation(int x1, int y1, int c1, int x2, int y2, int c2);

int main(){
    int x1,x2,y1,y2,c1,c2;

    scanf("%d %d %d %d %d %d", &x1, &y1, &c1, &x2, &y2, &c2);

    solve_equation(x1, y1, c1, x2, y2, c2);

    return 0;
}

// define function
void solve_equation(int x1, int y1, int c1, int x2, int y2, int c2){
    int x,y;

    // case 1. x또는 y의 계수가 0인 경우
    while((x1 != 0 || y1 != 0)){
        
    }
}