#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제>: https://www.acmicpc.net/problem/19532
// <문제해결>
// 1. x 또는 y의 인자를 비교해서 (최소)공배수((L)CM)를 구함.
// 2. 그걸 서로 뺌

enum {x,y,c}; // x == 0, y == 1, c == 2

// typedef struct Coefficient {
//     int row_1[3]; // 첫번째 행
//     int row_2[3]; // 두번째 행
// } HeadNumber;

// function declaration


int main(){
    float row[2][3]; // 각 열에 계수를 저장, 두 행은 각기 다른 일차방정식

    // 임시로 미사용
    // HeadNumber C; // 게수 >> C라고 칭함

    
    // 1. 식 생성
    // 값 받기 (x1 y1 c1, x2 y2 c2)
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            scanf("%f", &row[i][j]);
        }
    }

    // 여기서부터 모듈화 가능할듯

    // 2. x 계수 통일
    // temp[0]: 첫 행 x계수, temp[1]: 2번째 행 x계수
    float temp[2] = {row[0][x], row[1][x]}; // 계수 임시 저장

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            row[i][j] *= temp[1 - i];
        }
    }

    //3. 미지수 x 제거
    for(int i = 0; i < 3; i++){
        row[0][i] -= row[1][i];
    } // 잘 됐으면 여기서 1번째 항은 y + c = 0 꼴이어야 함


    row[0][c] /= row[1][y];


    return 0;
}

// define function
