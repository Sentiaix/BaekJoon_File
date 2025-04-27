#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int mat[9][9] = { {0, } };
    int max = -1; // max값 저장
    int max_index[2] = {0}; // max값의 mat index 저장

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(mat[i][j] > max){
                max = mat[i][j];
                max_index[0] = i + 1;
                max_index[1] = j + 1;
            }
        }
    }

    printf("%d\n%d %d\n", max, max_index[0], max_index[1]);
        
    return 0;
}