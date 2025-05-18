#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// function declaration
int prm_AtoB(int a, int b);

int main(){
    

    return 0;
}

// define function
int prm_AtoB(int a, int b){
    int arr[1230] = {0,}; // 1부터 10,000까지 소수의 수는 1229개임.
    int fct_save[10000] = {0,}; // 약수 저장
    int cnt = 0;

    // 소수가 아닌 수 선별
    for(int i = a; i <= b; i++){
        for(int j = 2; j < i; j++){
            if(a % j == 0){
                fct_save[i] = 1; // 1이면 약수가 아님.
            }
        }
    }


}