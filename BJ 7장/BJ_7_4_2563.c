#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// <문제> https://www.acmicpc.net/problem/2563
// 100 * 100 평면에 색종이를 붙임. 색종이는 10 * 10이고, 최대 100장이 있음.
// 색종이로 덮인 평면의 넓이를 구하기
// <입력> 첫 줄에 색종이의 수가 주어짐.
// <입력> 그 다음줄부터 색종이의 좌표가 주어짐. (y축-왼쪽변 거리, x축-아랫변 거리)
// 1. 종이 갯수 입력 2. 종이 좌표 입력


int main(){
    int paper;
    int counter = 0;
    int input[100][2] = {0,};
    int mat[100][100] = {0,};

    scanf("%d", &paper);

    for(int i = 0; i < paper; i++){
        scanf("%d %d", &input[i][0], &input[i][1]);
    }

    for(int i = 0; i < paper; i++){
        for(int j = input[i][0]; j < input[i][0] + 10; j++){
            for(int k = input[i][1]; k < input[i][1] + 10; k++){
                mat[j][k] = 1;
            }
        }
    }

    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            if(mat[i][j] == 1){
                counter++;
            }
        }
    }

    printf("%d\n", counter);

    return 0;
}