#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제>: https://www.acmicpc.net/problem/2501
// 약수 구하고, 작은 순서대로 저장하고 요구하는 n번로 작은 약숫값을 출력

// function declaration
int factor_fnd(int a, int num);

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d\n", factor_fnd(a, b));

    return 0;
}

// define function
int factor_fnd(int a, int num){
    int arr[10000] = {0,};
    int cnt = 0; // 약수 저장 도우미

    // 작동원리: 약수를 찾으면 그 수를 arr[cnt]번에 저장, 그리고 cnt++를 해서 다음 올바른 약수를 저장.
    // 예) 6 3 >> 6%1 == 0이므로 arr[cnt(=0)] == 1, 그 다음은 arr[cnt(=1)] == 2, ...
    for(int i = 1; i <= a; i++){ // 1 to a
        if(a % i == 0){
            arr[cnt] = i;
            cnt++;
        }
    }

    if(arr[num - 1]){ // n번째 약수가 존재하면, n번째 약수를 리턴.
        return arr[num - 1];
    } else{ // 존재하지 않으면 0 리턴
        return 0;
    }
}
