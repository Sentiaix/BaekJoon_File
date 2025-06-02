#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제>: https://www.acmicpc.net/problem/1085
// <입력>: x, y, w, h
// 직사각형은 좌하단 꼭짓점이 (0,0), 우상단 꼭짓점이 (w,h)이고
// 문제점1: 왼쪽 아래랑도 거리 확인해야함

int main(){
    int x,y,w,h;

    scanf("%d %d %d %d", &x, &y, &w, &h);

    int near_x = (w - x) < x ? (w - x) : x; // (오른쪽 벽과의 거리) < (왼쪽 벽과의 거리)
    int near_y = (h - y) < y ? (h - y) : y; // 저런 식으로 비교하여, 조건식이 참이면 (( -? A:B ))중 A를 반환.
    int result = near_x < near_y ? near_x : near_y;

    printf("%d\n", result);

    return 0;
}