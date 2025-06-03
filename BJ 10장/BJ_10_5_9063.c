#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제>: https://www.acmicpc.net/problem/9063

typedef struct value{
    int x_min;
    int x_max;
    int y_min;
    int y_max;
} VALUE;

// function declaration
void min_max(int* x, int* y, int n, VALUE* v); // x, y의 최대 최소를 구함
int Sum(int xM, int xm, int yM, int ym); // 넓이 구하는 함수

int main(){
    VALUE v;

    int n; // 받을 좌표 수
    scanf("%d", &n);

    int x[n];
    int y[n];

    for(int i = 0; i < n; i++){
        scanf("%d %d", &x[i], &y[i]);
    }

    min_max(x, y, n, &v);
    int S = Sum(v.x_max, v.x_min, v.y_max, v.y_min);

    printf("%d\n", S);

    return 0;
}

void min_max(int* x, int* y, int n, VALUE* v){
    v->x_min = x[0];
    v->x_max = x[0];
    v->y_min = y[0];
    v->y_max = y[0];

    for(int i = 1; i < n; i++){
        if(x[i] < v->x_min) v->x_min = x[i];
        if(x[i] > v->x_max) v->x_max = x[i];
        if(y[i] < v->y_min) v->y_min = y[i];
        if(y[i] > v->y_max) v->y_max = y[i];
    }
}

int Sum(int xM, int xm, int yM, int ym){
    return (xM - xm) * (yM - ym);
}