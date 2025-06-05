#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제>: https://www.acmicpc.net/problem/24265

int main(){
    long long int n;

    scanf("%lld", &n);

    // 수행 횟수 = 1 + 2 + 3 + .. (n-2) + (n-1) = n(n-1)/2
    printf("%lld\n", (n * (n-1)) / 2);
    printf("2\n");

    return 0;
}