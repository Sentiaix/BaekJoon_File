#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
// <문제>: https://www.acmicpc.net/problem/2903

int main(){
    int num = 0;
    int Num_spot = 0;

    scanf("%d", &num);

    Num_spot = pow(pow(2, num) + 1, 2);

    printf("%d", Num_spot);

    return 0;
}