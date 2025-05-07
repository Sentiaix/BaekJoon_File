#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제>: https://www.acmicpc.net/problem/1193
//  1/1
//  1/2 2/1
//  3/1 2/2 1/3
//  4/1 3/2 2/3 1/4
//  5/1 4/2 3/3 2/4 1/5
//  ...

// 함수 선언
void fraction_founder(int a);

int main(){
    int x;

    scanf("%d", &x);

    fraction_founder(x);

    return 0;
}

//함수 정의의
void fraction_founder(int a){
    int line = 1;

    // 대각선 찾기
    while(a > line){
        a -= line;
        line++; // n번째 줄에는 원소가 n개임. 따라서 a에서 n만큼 제거함
    }

    if (line % 2 == 0) {
        printf("%d/%d\n", a, line - a + 1);
    } else {
        printf("%d/%d\n", line - a + 1, a);
    }
}