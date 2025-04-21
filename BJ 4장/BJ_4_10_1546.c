#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 참고: https://www.acmicpc.net/problem/1546
//
// 입력값 중 최댓값을 받고, 각 입력에 대하여 입력/최댓값*100 으로 새로운 객체로 index를 구성함. 새롭게 평균 구성
// <입력> 과목 n개 입력, n개의 과목을 입력받음
// 최댓값(m)을 산출, 모든 항목에 index/m*100을 수행
// <출력> 결과값 출력

int main(){
    int subject; // 과목 수    
    scanf("%d", &subject);

    double arr[subject]; // 소수점도 산출해야함.
    double max = 0.0f; // 최댓값
    double sum = 0.0f; // 결과값

    // 값 입력 + 최댓값 확인
    for(int i = 0; i < subject; i++){
        scanf("%lf", &arr[i]);

        if(arr[i] > max){
            max = arr[i];
        }
    }

    for(int i = 0; i < subject; i++){
        sum += (arr[i] / max) * 100.0f;
    }

    // 새롭게 구성된 index로 평균값 계산, 출력
    printf("%lf\n", sum / subject);

    return 0;
}