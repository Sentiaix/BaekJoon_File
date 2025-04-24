#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// <문제> https://www.acmicpc.net/problem/5622
// 다이얼 전화걸기. n을 입력하려면 n+1초가 걸림.
// 0 = 연산자 / 9 = WXYZ / 8 = TUV / 7 = PQRS / 6 = MNO / 5 = JKL / 4 = GHI / 3 = DEF / 2 = ABC /

int main(){
    int time = 0; // 총 걸리는 시간
    char str[16] = {0}; // 영어 입력값

    scanf("%s", str);

    for(int i = 0; i < strlen(str); i++){
        if(str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z'){
            time += 10;
        }
        if(str[i] == 'T' || str[i] == 'U' || str[i] == 'V'){
            time += 9;
        }
        if(str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S'){
            time += 8;
        }
        if(str[i] == 'M' || str[i] == 'N' || str[i] == 'O'){
            time += 7;
        }
        if(str[i] == 'J' || str[i] == 'K' || str[i] == 'L'){
            time += 6;
        }
        if(str[i] == 'G' || str[i] == 'H' || str[i] == 'I'){
            time += 5;
        }
        if(str[i] == 'D' || str[i] == 'E' || str[i] == 'F'){
            time += 4;
        }
        if(str[i] == 'A' || str[i] == 'B' || str[i] == 'C'){
            time += 3;
        }
    }

    printf("%d\n", time);

    return 0;
}