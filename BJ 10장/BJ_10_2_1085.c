#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제>: https://www.acmicpc.net/problem/1085
// <입력>: x, y, w, h
// 직사각형은 좌하단 꼭짓점이 (0,0), 우상단 꼭짓점이 (w,h)이고
// 문제점1: 왼쪽 아래랑도 거리 확인해야함

// define struct
struct distance{
    int x;
    int y;
    int w;
    int h;
};

// function declaration
void fnd_dist(struct distance* p);
struct distance scanf_v();

int main(){
    struct distance a;

    a = scanf_v(a.x, a.y, a.w, a.h);
    fnd_dist( &a );

    return 0;
}

// define function

// 거리 판독 함수
void fnd_dist(struct distance* p){
    int left, right, top, bottom; // 현재 기준에서 왼쪽과의 거리, 오른쪽과의 거리 등..
}

// 변수 받는 함수
struct distance scanf_v(){
    struct distance tmp;

    scanf("%d %d %d %d", tmp.x, tmp.y, tmp.w, tmp.h);

    return tmp;
}