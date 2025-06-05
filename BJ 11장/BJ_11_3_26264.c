#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제>: https://www.acmicpc.net/problem/24264

// 틀렸음 

int main(){
    long long int n; // 1 <= n <= 500,000인데, 50만 * 50만은 int의 범위를 초과함
    scanf("%lld", &n);
    printf("%lld\n%d\n", n * n, 2);

    return 0;
}