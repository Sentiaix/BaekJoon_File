#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제>: https://www.acmicpc.net/problem/15894
// 무한 피라미드? 의 둘레 구하는 문제
// 1. layer당 그 layer윗면의 길이는 항상 1임.
// 2. layer당 항상 옆면의 길이는 2임
// 3. 가장 마지막 층의 바닥길이는 layer와 동일함
// 따라서 주어진 도형의 둘레는 layer + (layer * 2) + layer(=last box) = layer * 4

int main(){
    long long int n; // 마지막 박수의 수

    scanf("%lld", &n);
    printf("%lld\n", 4 * n);

    return 0;
}