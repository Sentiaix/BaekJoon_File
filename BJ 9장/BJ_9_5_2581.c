#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제>: https://www.acmicpc.net/problem/2581

// function declaration
int prm_AtoB(int a, int b, int* S, int* min);

int main(){
    int a,b;
    int S; // 합
    int min; // 최솟값

    scanf("%d %d", &a, &b);

    prm_AtoB(a,b, &S, &min);

    if(S != 0 && min != 0){
        printf("%d\n%d\n", S, min);
    } else{ // 소수가 없는 경우, -1 출력
        printf("-1\n");
    }

    return 0;
}

// define function
int prm_AtoB(int a, int b, int* S, int* min){
    int prm_num[1230] = {0,}; // 1~10,000 중 소수는 1229개
    int cnt = 0;
    int sum = 0;

    // 소수가 아닌 수 선별
    for(int i = a; i <= b; i++){ // a부터 b까지

        if(i < 2) continue; // 0,1은 소수가 아님!

        int is_prime = 1; // 1이면 prime

        // 나누기로 약수 존재 검증
        for(int j = 2; j < i; j++){ 
            if(i % j == 0){ // 나눴는데 나머지가 0이면 어떤 수의 약수임.
                is_prime = 0; // 약수있음
                break; // 최적화를 위해 탈출.
            }
        }

        // 소수 저장
        if(is_prime == 1){
            prm_num[cnt] = i;
            cnt++;
        }
    }


    // 모든 소수의 합 저장하기
    for(int i = 0; i < cnt; i++){
        sum += prm_num[i];
    }

    if(cnt > 0){
        *S = sum;
        *min = prm_num[0];
    } else{
        *S = 0;
        *min = 0;
    }

    return 0;
}