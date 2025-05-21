#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제>: https://www.acmicpc.net/problem/11653

int main(){
    int n;

    scanf("%d", &n);

    if(n == 1) return 0;

    // n이 i로 나눠진다면, sqrt(n)보다 큰 범위에 i과 약수쌍을 이루는 수가 있으므로, i * i로 효율성을 증대시킴
    for(int i = 2; i * i <= n; i++){
        while(n % i == 0){ // i로 안 나눠질때까지 반복, 나눠지면 i 출력
            printf("%d\n", i);
            n /= i;
        }
    }

    // 마지막 남은 수가 소수인 경우
    if(n > 1){
        printf("%d\n", n);
    }

    return 0;
}