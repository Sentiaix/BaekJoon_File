#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제> https://www.acmicpc.net/problem/2720
// Quarter: $0.25, Dime: $0.10, Nickel: $0.05, Penny: $0.01
// <입략> : 1. 케이스 수, 2. 케이스 수 만큼의 N센트 입력
// 메모리 소수점 연산 오류를 막기 위해 소수점연산은 하지 않음.

void Mmod(int money, int* q, int* d, int* n, int* p) {
    *q = money / 25; money %= 25; // Quarter: 25c
    *d = money / 10; money %= 10; // Dime: 10c
    *n = money / 5;  money %= 5; // Nickel: 5c
    *p = money; // 나머지 = Penny의 수 // Penny: 1c
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        int q, d, n, p;
        Mmod(arr[i], &q, &d, &n, &p);
        printf("%d %d %d %d\n", q, d, n, p);
    } 

    return 0;
}