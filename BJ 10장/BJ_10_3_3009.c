#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제>: https://www.acmicpc.net/problem/3009

// function declaration
void fnd_point(int* x, int* y); // 한 번 나온 값 찾기

int main(){
    int x[3];
    int y[3];

    for(int i = 0; i < 3; i++){
        scanf("%d %d", &x[i], &y[i]);
    }

    fnd_point(x, y);

    return 0;
}

// define function
void fnd_point(int* x, int* y) {
    int x4, y4;

    // case 1. 0번, 1번값이 같음 >> 2번이 혼자임
    // case 2. 0번, 2번값이 같음 >> 1번이 혼자임
    // case 3. 1번, 2번값이 같음 >> 0번이 혼자임
    // 경우의 수 : 3C1 = 3*2*1/1*2 = 3
    if (x[0] == x[1])
        x4 = x[2];
    else if (x[0] == x[2])
        x4 = x[1];
    else
        x4 = x[0];

    if (y[0] == y[1])
        y4 = y[2];
    else if (y[0] == y[2])
        y4 = y[1];
    else
        y4 = y[0];

    printf("%d %d\n", x4, y4);
}