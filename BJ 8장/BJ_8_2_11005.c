#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제> https://www.acmicpc.net/problem/11005
// B진법 표
// 0 1 2 3 4 5 6 7 8 9 A B C D E
// F G H I J K L M N O P Q R S T
// U V W X Y Z (0 = 0, Z = 35)

int trans(const int input, const int num1){
    int stack = 0;

    for(int i = 0; i < 50; i++){
        stack = input / num1;
    }
}

int main(){
    long long toTrans = 0; // B진법으로 바꿀 수
    int num = 0; //진법

    scanf("%d %d", &toTrans, &num);


    
    return 0;
}