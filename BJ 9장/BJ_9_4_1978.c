#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제>: https://www.acmicpc.net/problem/1978
// 소수란? 1과 자기 자신만을 약수로 갖는 수. (단 1은 소수가 아님.) <반> 합성수

int prime_num(int* arr, int n);

int main(){
    int n;
    int arr[100] = {0, };

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("%d\n", prime_num(arr, n));

    return 0;
}

// define function
int prime_num(int* arr, int n){
    int cnt = 0;
    
    for(int i = 0; i < n; i++){
        int dtct = 0;

        // 1은 소수가 아니므로 건너뜀
        if (arr[i] < 2) continue;

        // 소수 판별
        for(int j = 2; j * j <= arr[i]; j++){
            if(arr[i] % j == 0){
                dtct = 1;
                break;
            }
        }
        // 소수일 경우 카운트 증가
        if(dtct == 0) cnt++;
    }

    return cnt;
}