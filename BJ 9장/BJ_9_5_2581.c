#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// function declaration
int prm_AtoB(int a, int b);

int main(){
    int a,b;

    scanf("%d %d", &a, &b);

    printf("%d\n%d\n", prm_AtoB(a,b));

    return 0;
}

// define function
int prm_AtoB(int a, int b){
    int arr[1230] = {0,}; // 1부터 10,000까지 소수의 수는 1229개임.
    int fct_save[10000] = {0,}; // 약수 저장
    int real_prm_num[1000] = {0,};
    int cnt = 0;
    int sum = 0;

    // 소수가 아닌 수 선별
    for(int i = a; i <= b; i++){ // a부터 b까지
        for(int j = 2; j < i; j++){ // 2부터 자기 자신 전까지로 나눠봄.
            if(a % j == 0){ // 나눴는데 나머지가 다 0이 아니면 소수니까
                fct_save[i] = i; // 소수면 그 index number을 저장
            }
        }
    }

    // 최종 소수 저장 배열에 값을 옮기기
    for(int i = a; i <= b; i++){
        if(fct_save[i] != 0){
            real_prm_num[cnt] = fct_save[i];
            cnt++;
        }
    }

    // 모든 소수의 합 저장하기
    for(int i = 0; i < b - a; i++){
        sum += real_prm_num[i];
    }

    return sum, real_prm_num[0];
}