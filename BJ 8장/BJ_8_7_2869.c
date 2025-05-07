#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문재>: https://www.acmicpc.net/problem/2869
// 달팽이가 V미터짜리 벽을 하루에 A미터씩 등반, 자는동안 B미터 미끄러짐
// 거리 = 속력 x 시간, 시간 = 거리 / 속력

int main() {
    int A, B, V; // A: meter per day, B: -meter per day, V: have to ascend tall
    scanf("%d %d %d", &A, &B, &V);

    int day = (V - B - 1) / (A - B) + 1;

    printf("%d\n", day);

    return 0;
}
