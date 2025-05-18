#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제>: https://www.acmicpc.net/problem/9506
// 9장 2번 코드 재탕

// function declaration
void perfect_num(int num);

int main(){
    int a;

    while(1){
        scanf("%d", &a);

        if(a == -1) break;

        perfect_num(a);
    }

    

    return 0;
}

// define function
void perfect_num(int num){
    int arr[10000] = {0,};
    int cnt = 0; // 약수의 수 >> 저장된 총 약수의 수 -1 개
    int sum = 0; // 합산 도우미

    // 작은 순서대로 약수 저장하기 (단, 자기 자신은 저장하지 않음)
    for(int i = 1; i < num; i++){ // 1 to num
        if(num % i == 0){
            arr[cnt] = i;
            cnt++;
        }
    }

    // 저장된 약수 순서대로 sum에 더하기
    for(int i = 0; i < cnt; i++){
        sum += arr[i];
        // printf("sum: %d, arr[%d]: %d\n", sum, i, arr[i]); test print
    }


    // 주어진 숫자와 약수들의 합을 비교
    if(num == sum){
        printf("%d = 1 ", num);
        for(int i = 0; i < cnt - 1; i++){
            printf("+ %d ", arr[i + 1]); // 1은 이미 썼으니 그 다음 약수부터 출력
        }
        printf("\n");
    } else{
        printf("%d is NOT perfect.\n", num);
    }
}