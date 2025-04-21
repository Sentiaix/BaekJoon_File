#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 참고: https://www.acmicpc.net/problem/1546
//
// 입력값 중 최댓값을 받고, 각 입력에 대하여 입력/최댓값*100 으로 새롭게 평균을 조작함.
// <입력> 과목 n개 입력, n개의 과목을 입력받음
// 최댓값(m)을 산출, 모든 항목에 index/m*100을 수행
// <출력> 결과값 출력

int main(){
    int subject; // 과목 수
    double m = 0; // 최댓값
    
    scanf("%d", &subject);

    double arr[subject]; // 소수점도 산출해야함.

    // 값 입력
    for(int i = 0; i < subject; i++){
        scanf("%lf", &arr[i]);
    }

    // 최댓값 초기 설정
    m = arr[0];

    while(1){
        int i = 0; i++;

        if(arr[i] > m){
            m = arr[i];
        }
        if(i > subject){
            break;
        }
    }



    return 0;
}