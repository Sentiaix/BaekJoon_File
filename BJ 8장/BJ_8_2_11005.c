#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제> https://www.acmicpc.net/problem/11005
// B진법 표
// 0 1 2 3 4 5 6 7 8 9 A B C D E
// F G H I J K L M N O P Q R S T
// U V W X Y Z (0 = 0, Z = 35)
// 진법 : n번째 자리의 값에 10^n-1 처리.

int trans(const int input, const int num1){
    int stack[100] = {0,};
    int transed[100] = {0,}; // 변환된 값 저장
    int editable_input = input;

    for(int i = 0; i < 50; i++){
        stack[i] = editable_input % num1;
        editable_input /= num1;
        if(editable_input - num1 <= 0){
            break;
        }
    }

    // 나머지를 B진법 수로 바꿈.
    for(int i = 0; stack[i] == 0; i++){
        if(stack[i] >= 0 && stack[i] <= 10){
            transed[i] = stack[i] + '0';
        } else if(stack[i] >= 11 && stack[i] <= 35){
            transed[i] = stack[i] + 'A' + 10;
        } else{
            return -1; // 예외처리
        }
    }
}

int main(){
    long long toTrans = 0; // B진법으로 바꿀 수
    int num = 0; //진법
    int transed[100] = {0, };

    scanf("%d %d", &toTrans, &num);

    for(int i = 0; transed[i] != 0; i++){
        printf("%c", transed[i]);
    }

    printf("\n");
    
    return 0;
}