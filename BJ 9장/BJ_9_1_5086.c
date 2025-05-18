#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제>: https://www.acmicpc.net/problem/5086
// A B 입력, A가 B와 어떤 관계인지 출력.
// 8 <> 16: 8은 16의 약수 "factor" 출력
// 32 <> 4: 32은 4의 배수. "multiple"
// 17 <> 5: 아무것도 아님. "neither", 0 0 입력 시 종료

// function declaration
void inter_REL(int a, int b);

int main(){
    int a = 1;
    int b = 1;

    while(a != 0 && b != 0){
        scanf("%d %d", &a, &b);
        inter_REL(a, b);
    }

    return 0;
}

// define function
void inter_REL(int a, int b){
    
    if(a == 0 && b == 0){ // nothing.
        
    }
    // a < b 인데, a / b 나머지가 0이 아닐 때: a가 b의 약수
    else if( a / b == 0 && a % b == a){
        printf("factor\n");
    }
    // a 와 b가 약수 또는 배수 관계인데 a > b 인 경우: a가 b의 배수
    else if( a / b != 0 && a % b == 0){
        printf("multiple\n");
    }
    // 모두 아닌 경우
    else{
        printf("neither\n");
    }
}