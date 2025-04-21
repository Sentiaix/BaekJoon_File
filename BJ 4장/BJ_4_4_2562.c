#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 1. 자연수 9개 받기 (자연수 n은 100보다 작음)
// 2. 최댓값 찾기
// 3. 최댓값이 몇 번째 자연수인지 찾기

int main(){
    int arr[9] = {0};
    int biggest = 0;
    int n_th_num = 0;

    // get 9 natural numbers
    for(int i = 0; i < 9; i++){
        scanf("%d", &arr[i]);
    }

    // find biggest number
    for(int i = 0; i < 9; i++){
        if(arr[i] > arr[i + 1] && arr[i] > biggest){
            biggest = arr[i];
            n_th_num = i + 1; //store which number is biggest
        }
    }

    printf("%d\n%d", biggest, n_th_num);

    return 0;
}