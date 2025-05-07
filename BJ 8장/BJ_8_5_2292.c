#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제>: https://www.acmicpc.net/problem/2292

int main() {
    int n;
    scanf("%d", &n);

    int layer = 1;      // 현재 층 (1층은 방 1번만)
    int max_num = 1;    // 현재 층의 마지막 방 번호

    while (n > max_num) {
        max_num += 6 * layer;  // 다음 층의 최대 방 번호
        layer++;               // 층 증가
    }

    printf("%d\n", layer);
    return 0;
}
