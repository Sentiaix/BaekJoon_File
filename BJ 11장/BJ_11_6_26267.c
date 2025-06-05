#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제>: https://www.acmicpc.net/problem/24267

int main(){
    long long int n;

    scanf("%lld", &n);

    printf("%lld\n", ((n) * (n - 1) * (n - 2)) / 6);
    printf("3\n");

    return 0;
}