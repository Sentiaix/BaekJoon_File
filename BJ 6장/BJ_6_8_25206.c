#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제> https://www.acmicpc.net/problem/25206

int main(){
    char Object_name[20][51]; // 과목명
    float credit[20] = {0.0f}; // 학점
    char tier[20][3]; // 등급, ASCII A = 65, Z = 90
    float stack = 0.0f;
    float total_credit = 0.0f;

    for(int i = 0; i < 20; i++){
        scanf("%s %f %s", Object_name[i], &credit[i], tier[i]);
        
        float grade = 0.0f;

        if (tier[i][0] == 'A') { // A+이면 grade = 4.5f, 아니면 grade = 4.0f
            grade = (tier[i][1] == '+') ? 4.5f : 4.0f;
        } else if (tier[i][0] == 'B') { // B+이면 grade = 3.5f, 아니면 grade = 3.0f
            grade = (tier[i][1] == '+') ? 3.5f : 3.0f;
        } else if (tier[i][0] == 'C') { // C+이면 grade = 2.5f, 아니면 grade = 2.0f
            grade = (tier[i][1] == '+') ? 2.5f : 2.0f;
        } else if (tier[i][0] == 'D') { // D+이면 grade = 1.5f, 아니면 grade = 1.0f
            grade = (tier[i][1] == '+') ? 1.5f : 1.0f;
        } else if (tier[i][0] == 'F') { // F이면 grade = 0.0f
            grade = 0.0f;
        } else if (tier[i][0] == 'P') {
            continue; // P는 학점 계산에 아예 포함 안 시킴
        }

        stack += credit[i] * grade; // stack에 credit과 등급을 곱하고 저장.
        total_credit += credit[i];
    }

    printf("%f\n", (stack / total_credit));

    return 0;
}