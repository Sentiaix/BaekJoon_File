#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int row, col;
    int mat1[100][100];
    int mat2[100][100];

    scanf("%d %d", &row, &col);

    // 첫 번째 행렬 입력
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // 두 번째 행렬 입력
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // 두 행렬 더해서 출력
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", mat1[i][j] + mat2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
