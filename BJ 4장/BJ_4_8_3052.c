#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <입력> 서로 다른 10개의 정수
// 입력값을 각각 42로 나누고 나머지 저장
// <출력> 서로 다른 나머지의 수를 출력.

int main(){
    int arr[10] = {0}; // 총 10개의 정수 입력받을 배열
    int mod[42] = {0}; // n번째 배열에 값을 넣어 특정 수(나머지)가 나왔는지 검증
    int count = 0; //서로 다른 나머지 수

    // <입력>
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);

        // 배열 i번째 값을 42로 나누고 저장
        arr[i] %= 42;
        mod[arr[i]] = 1;
    }

    // 서로 다른 나머지 수 계산
    for(int i = 0; i < 42; i++){
        if(mod[i] == 1){ //boolean 조건. mod[i]의 값이 == 1(참) 이면
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}